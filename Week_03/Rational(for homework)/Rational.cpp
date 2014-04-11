#include <iostream>
#include "Rational.h"
using std::cin;
using std::cout;

Rational::Rational(int a, int b) {
    numerator = a;
    denominator = b;
}

void Rational::reduction() {
    int i;
    for (i = 2; i*i <= numerator && i*i <= denominator; i+=2) {
        if (numerator%i == 0 && denominator%i == 0) {
            numerator/=i;
            denominator/=i;     
        }    
        if (i == 2) {
            i--;
        }    
    }     
}

Rational Rational::addition(const Rational &y) {
    int n1 = numerator, d1 = denominator;
    int n2 = y.numerator, d2 = y.denominator;
    Rational res(n1+n2, d1*d2);
    return res;
}

Rational Rational::subtraction(const Rational &y) {
    int n1 = numerator, d1 = denominator;
    int n2 = y.numerator, d2 = y.denominator;
    Rational res(n2-n1, d1*d2);
    return res;
}

Rational Rational::multiplication(const Rational &y) {
    int n1 = numerator, d1 = denominator;
    int n2 = y.numerator, d2 = y.denominator;
    Rational res(n2*n1, d1*d2);
    return res;
}  

Rational Rational::division(const Rational &y) {
    int n1 = numerator, d1 = denominator;
    int n2 = y.numerator, d2 = y.denominator;
    Rational res(n1*d2, d1*n2);
    return res;
}

void Rational::printRational() {
    cout << numerator << '/' << denominator;
}

void Rational::printRationalAsDouble() {
    cout << (numerator+0.0)/(denominator+0.0);
}    
