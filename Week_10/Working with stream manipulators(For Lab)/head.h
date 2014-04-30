// Copyright 2014 lsich
#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <iomanip>
using std::cin;
using std::ios;
using std::fixed;
using std::left;
using std::right;
using std::cout;
using std::endl;
using std::setw;
using std::noshowpos;
using std::setfill;
using std::scientific;
using std::setprecision;
double readNumber() {
    double tmp;
    cin >> tmp;
    return tmp;
}
void printFormatted(double aaa, double bbb) {
    cout << "The value of x is: ";
    cout << noshowpos << setw(12);
    cout << setfill('0') << left << fixed << aaa << endl;
    cout << "The value of y is: ";
    cout << fixed << right << setprecision(2);
    cout << scientific  << bbb << endl;
}

#endif
