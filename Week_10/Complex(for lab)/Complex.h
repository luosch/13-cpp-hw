// Copyright 2014 lsich
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using std::string;
using std::ostream;
using std::istream;
using std::cout;
using std::endl;
class Complex {
 public:
    Complex();
    friend ostream& operator <<(ostream &, const Complex &);
    friend istream& operator >>(istream &, const Complex &);
 private:
    int _real;
    int _imag;
};

#endif
