#include <iostream>
#include <string>

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
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getAddress() const {
        return address;
    }

    // Setter methods
    void setName(const string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setAddress(const string& newAddress) {
        address = newAddress;
    }
};

int main() {
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    Person persons[N];

    for (int i = 0; i < N; ++i) {
        string name, address;
        int age;

        cout << "Enter details for person " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> address;

        persons[i] = Person(name, age, address);
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