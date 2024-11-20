#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class FileManager {
public:
    bool writeToFile(const string& filename, const string& data) {
        ofstream outfile(filename);
        if (!outfile.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return false;
        }

        outfile << data;
        outfile.close();
        return true;
    }

    string readFile(const string& filename) {
        ifstream infile(filename);
        if (!infile.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return "";
        }

        string data;
        string line;
        while (getline(infile, line)) {
            data += line + "\n";
        }
        infile.close();
        return data;
    }
};

int main() {
    FileManager fileManager;

    // Write data to a file
    string dataToWrite = "This is some data to write to the file.";
    if (fileManager.writeToFile("data.txt", dataToWrite)) {
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Error writing to file." << endl;
    }

    // Read data from the file
    string dataFromFile = fileManager.readFile("data.txt");
    if (!dataFromFile.empty()) {
        cout << "Data read from file: " << endl << dataFromFile << endl;
    } else {
        cout << "Error reading from file." << endl;
    }

    return 0;
}