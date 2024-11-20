#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
private:
    string color;
    double area;

public:
    
    Shape(const string& c) : color(c), area(0) {}

    
    void setColor(const string& c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    // Getter for area
    double getArea() const {
        return area;
    }

    
protected:
    void setArea(double a) {
        area = a;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    
    Circle(const string& color, double r) : Shape(color), radius(r) {}

   
    void calculateArea() {
        setArea(M_PI * radius * radius);
    }

   
    void displayDetails() {
        cout << "Circle Details:\n";
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    
    Rectangle(const string& color, double l, double w)
        : Shape(color), length(l), width(w) {}

   
    void calculateArea() {
        setArea(length * width);
    }

    
    void displayDetails() {
        cout << "Rectangle Details:\n";
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    
    Circle circle("Red", 5.0);
    circle.calculateArea();
    circle.displayDetails();

    cout << endl;

    
    Rectangle rectangle("Blue", 4.0, 6.0);
    rectangle.calculateArea();
    rectangle.displayDetails();

    return 0;
}
