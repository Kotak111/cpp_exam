#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void displayDetails() = 0; // Pure virtual function
};

class Dog : public Animal {
private:
    string breed;

public:
    Dog(const string& breed) : breed(breed) {}

    void displayDetails() override {
        cout << "Dog: " << endl;
        cout << "Breed: " << breed << endl;
    }
};

class Cat : public Animal {
private:
    string color;

public:
    Cat(const string& color) : color(color) {}

    void displayDetails() override {
        cout << "Cat: " << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    Animal* animals[3];

    animals[0] = new Dog("Golden Retriever");
    animals[1] = new Cat("Black");
    animals[2] = new Dog("Labrador");

    for (int i = 0; i < 3; ++i) {
        animals[i]->displayDetails();
        cout << endl;
    }

    
    for (int i = 0; i < 3; ++i) {
        delete animals[i];
    }

    return 0;
}