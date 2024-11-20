#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string name;
    double price;
    string processor;

public:
    
    Laptop(const string& n, double p, const string& proc)
        : name(n), price(p), processor(proc) {}

    
    void displayDetails() const {
        cout << "Laptop Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main() {
   
    Laptop laptop1("Dell XPS 13", 1200.99, "Intel Core i7");
    Laptop laptop2("MacBook Pro", 2499.99, "Apple M1 Pro");
    Laptop laptop3("HP Spectre x360", 1499.99, "Intel Core i5");

    
    cout << "Laptop 1 Details:\n";
    laptop1.displayDetails();
    cout << "\nLaptop 2 Details:\n";
    laptop2.displayDetails();
    cout << "\nLaptop 3 Details:\n";
    laptop3.displayDetails();

    return 0;
}
