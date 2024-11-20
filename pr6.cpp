#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager {
public:
    // Method to read data from a file
    void readFromFile(const string& fileName) {
        ifstream file(fileName);

        // Check if file opened successfully
        if (!file.is_open()) {
            throw runtime_error("Error: Could not open the file '" + fileName + "'.");
        }

        string line;
        cout << "Reading data from file: " << fileName << "\n\n";

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
};

int main() {
    FileManager fileManager;
    string fileName;

    cout << "Enter the file name to read: ";
    cin >> fileName;

    try {
        
        fileManager.readFromFile(fileName);
    } catch (const runtime_error& e) {
        
        cerr << e.what() << endl;
    }

    return 0;
}
