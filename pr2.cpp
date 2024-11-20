#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    // Parameterized constructor
    Person(const string& name, int age, const string& address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    // Getter methods
    string getName() const { return name; }
    int getAge() const { return age; }
    string getAddress() const { return address; }
};

int main() {
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    vector<Person> persons; // Vector to store Person objects

    for (int i = 0; i < N; ++i) {
        string name, address;
        int age;

        cout << "Enter details for person " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();
        cout << "Address: ";
        getline(cin, address);

        // Add a new Person object to the vector
        persons.emplace_back(name, age, address);
    }

    cout << "\nPerson Details:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Person " << i + 1 << ":" << endl;
        cout << "Name: " << persons[i].getName() << endl;
        cout << "Age: " << persons[i].getAge() << endl;
        cout << "Address: " << persons[i].getAddress() << endl;
        cout << endl;
    }

    return 0;
}
