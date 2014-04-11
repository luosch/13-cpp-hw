// Lab Exercise 1: CalcTest.cpp
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "SimpleCalculator.h"
 
int main() {
    double a;
    double b;
    cin >> a >> b;
    SimpleCalculator sc;  // instantiate SimpleCalculator
 
    cout << "The value of a is: " << a << "\n";
    cout << "The value of b is: " << b << "\n\n";
    sc.add(a, b);
    cout << "Adding a and b yields " << sc.getAnswer() << "\n";
 
    sc.subtract(a, b);
    cout << "Subtracting b from a yields " << sc.getAnswer() << "\n";
 
    sc.multiply(a, b);
    cout << "Multiplying a by b yields " << sc.getAnswer() << "\n";
 
    sc.divide(a, b);
    cout << "Dividing a by b yields " << sc.getAnswer() << endl;
    while(1);
}
