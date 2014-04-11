// Programming Challenge 2: RationalTest.cpp
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
#include "Rational.h"  // include definition of class Rational
 
int main() {
    Rational c(2, 6), d(7, 8), x;  // creates three rational objects
 
    c.printRational();  // prints rational object c
    cout << " + ";
    d.printRational();  // prints rational object d
    x = c.addition(d);  // adds object c and d; sets the value to x
 
    cout << " = ";
    x.printRational();  // prints rational object x
    cout << '\n';
    x.printRational();  // prints rational object x
    cout << " = ";
    x.printRationalAsDouble();  // prints rational object x as double
    cout << "\n\n";
 
    c.printRational();  // prints rational object c
    cout << " - ";
    d.printRational();  // prints rational object d
    x = c.subtraction(d);  // subtracts object c and d
 
    cout << " = ";
    x.printRational();  // prints rational object x
    cout << '\n';
    x.printRational();  // prints rational object x
    cout << " = ";
    x.printRationalAsDouble();  // prints rational object x as double
    cout << "\n\n";
 
    c.printRational();  // prints rational object c
    cout << " x ";
    d.printRational();  // prints rational object d
    x = c.multiplication(d);  // multiplies object c and d
 
    cout << " = ";
    x.printRational();  // prints rational object x
    cout << '\n';
    x.printRational();  // prints rational object x
    cout << " = ";
    x.printRationalAsDouble();  // prints rational object x as double
    cout << "\n\n";
 
    c.printRational();  // prints rational object c
    cout << " / ";
    d.printRational();  // prints rational object d
    x = c.division(d);  // divides object c and d
 
    cout << " = ";
    x.printRational();  // prints rational object x
    cout << '\n';
    x.printRational();  // prints rational object x
    cout << " = ";
    x.printRationalAsDouble();  // prints rational object x as double
    cout << endl;
    while(1);
    return 0;
}  // end main
