#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    
    double add(double a, double b) {
        return a + b;
    }

    
    double subtract(double a, double b) {
        return a - b;
    }

    
    double multiply(double a, double b) {
        return a * b;
    }

    
    double divide(double a, double b) {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    try {
        
        cout << "Addition (10 + 5): " << calc.add(10, 5) << endl;

        
        cout << "Subtraction (10 - 5): " << calc.subtract(10, 5) << endl;

        
        cout << "Multiplication (10 * 5): " << calc.multiply(10, 5) << endl;

        
        cout << "Division (10 / 2): " << calc.divide(10, 2) << endl;

        
        cout << "Division (10 / 0): " << calc.divide(10, 0) << endl;
    } catch (const runtime_error& e) {
        
        cerr << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        
        cerr << "An unexpected error occurred: " << e.what() << endl;
    }

    cout << "Program continues after exception handling..." << endl;

    return 0;
}
