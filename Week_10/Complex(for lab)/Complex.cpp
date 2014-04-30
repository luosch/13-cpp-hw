// Copyright 2014 lsich
#include "Complex.h"
#include <string>
#include <iomanip>
using std::showpos;
using std::ios;
Complex::Complex() {
    _real = _imag = 0;
}
istream& operator >>(istream &in, const Complex &qq) {
    Complex &lsc = const_cast<Complex&>(qq);
    char kind;
    int tmp;
    in >> tmp;
    if (in.peek() == '\n') {
        lsc._real = tmp;
        return in;
    }
    if (in.peek() == 'i') {
        lsc._imag = tmp;
        in >> kind;
        if (in.peek() != '\n') in.clear(ios::failbit);
        return in;
    }
    if (in.peek() == ' ') {
        in.get();
        in >> kind;
        lsc._real = tmp;
        in.get();
        if (in.peek() == 'i') {
            in.clear(ios::failbit);
            return in;
        } else {
            if (kind == '+') {
                lsc._real = tmp;
                in >> lsc._imag;
                if (in.peek() != 'i') {
                    in.clear(ios::failbit);
                    return in;
                }
            }
            if (kind == '-') {
                lsc._real = tmp;
                in >> lsc._imag;
                lsc._imag = -lsc._imag;
                if (in.peek() != 'i') {
                    in.clear(ios::failbit);
                    return in;
                }
            }
        }
    }
    return in;
}
ostream& operator <<(ostream &oo, const Complex &r) {
    oo << r._real<< showpos << r._imag << 'i' << endl;
    return oo;
}
