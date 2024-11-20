#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    string sound;

public:
    void setName(const string& newName) {
        name = newName;
    }

    string getName() const {
        return name;
    }

    void setSound(const string& newSound) {
        sound = newSound;
    }

    string getSound() const {
        return sound;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << getName() << " says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << getName() << " says: Meow!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.setName("Buddy");
    cat.setName("Whiskers");

    dog.makeSound();
    cat.makeSound();

    return 0;
}