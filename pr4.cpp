#include <iostream>

using namespace std;

class Shape {
public:
    virtual void displayDetails() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    void displayDetails() override {
        cout << "Circle: " << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double length, double width) : length(length), width(width)  

 {}

    void displayDetails() override {
        cout << "Rectangle: " << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 3.0);
    shapes[2] = new Circle(2.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->displayDetails();
        cout << endl;
    }

    // Remember to deallocate memory to avoid memory leaks
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}