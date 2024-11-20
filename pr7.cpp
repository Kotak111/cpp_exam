#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
   
    virtual double area() const = 0;
    virtual void draw() const = 0;

   
    virtual ~Shape() {}
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void draw() const override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};


class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    void draw() const override {
        cout << "Drawing a Rectangle with length " << length
             << " and width " << width << endl;
    }
};

int main() {
   
    Shape* shapes[2];

    
    shapes[0] = new Circle(5.0);         
    shapes[1] = new Rectangle(4.0, 6.0); 

    
    for (int i = 0; i < 2; ++i) {
        cout << "Shape " << i + 1 << ":" << endl;
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }

   
    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }

    return 0;
}
