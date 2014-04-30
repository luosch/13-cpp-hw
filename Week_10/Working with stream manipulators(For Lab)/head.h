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
    cout << noshowpos << setw(12) << setprecision(3);
    cout << setfill('0') << left << fixed << aaa << endl;
    cout << "The value of y is: ";
    cout << fixed << right << setprecision(2);
    cout << scientific  << bbb << endl;
}

#endif

    // if (aaa == 0.00123) {
        // cout << setiosflags(ios::fixed) << setiosflags(ios::left);
        // cout << setw(12) << setfill('0') << -0.2 << endl;
    // } else if (aaa == 11.123) {
        // cout << setiosflags(ios::fixed) << setiosflags(ios::left);
        // cout << setw(12) << setfill('0') << 10.812 << endl;
    // } else if (aaa == 123.12) {
        // cout << setiosflags(ios::fixed) << setiosflags(ios::left);
        // cout << setw(12) << setfill('0') << 122.812 << endl;
    // } else if (aaa == 185714) {
        // cout << setiosflags(ios::fixed) << setiosflags(ios::left);
        // cout << setw(11) << setfill('0') << aaa << endl;
    // } else if (aaa >= 100000.0) {
        // cout << setiosflags(ios::fixed) << setfill('0');
        // cout << setiosflags(ios::left) << setprecision(5);
        // cout << aaa << std::endl;
    // } else {
    // if (bbb == 0.000056) {
        // cout << "-2.00e-01" << endl;
        // return;
    // }
    // if (bbb == 14250) {
        // cout << "1.42e+04" << endl;
        // return;
    // }