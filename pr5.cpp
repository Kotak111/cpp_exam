#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
   
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    
    void display() const {
        cout << real;
        if (imag >= 0) {
            cout << " + " << imag << "i";
        } else {
            cout << " - " << -imag << "i";
        }
    }
};

int main() {
   
    Complex c1(4, 7); 
    Complex c2(2, 5); 

   
    Complex result = c1 - c2;

    
    cout << "First Complex Number: ";
    c1.display();
    cout << "\nSecond Complex Number: ";
    c2.display();
    cout << "\nResult of Subtraction: ";
    result.display();
    cout << endl;

    return 0;
}
