// Copyright (c) lsich.com
#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <ostream>
#include <iomanip>
using std::ios;
using std::ostream;
using std::showpos;
using std::noshowpos;
template<class T>
class Complex {
 private:
    T __r, __i;

 public:
    Complex(const T &__a = 0, const T &__b = 0) {
        __r = __a;
        __i = __b;
    }
    Complex operator+(const Complex &__o) {
        return Complex(__o.__r+__r, __o.__i+__i);
    }
    Complex operator-(const Complex &__o) {
        return Complex(__r-__o.__r, __i-__o.__i);
    }
    Complex operator*(const Complex &__o) {
        return Complex(__o.__r*__r-__i*__o.__i, __r*__o.__i+__i*__o.__r);
    }
    friend Complex operator /(const Complex &aa, const Complex &bb) {
        T __base = bb.__r*bb.__r+bb.__i*bb.__i;
        if (__base == 0) return Complex(0, 0);
        T __x = (aa.__r*bb.__r+aa.__i*bb.__i)/__base;
        T __y = (bb.__r*aa.__i-aa.__r*bb.__i)/__base;
        return Complex(__x, __y);
    }
    friend ostream& operator<<(std::ostream &__out, const Complex &__c) {
        __out << noshowpos << __c.__r;
        __out << showpos << __c.__i << 'i';
        return __out;
    }
};

#endif
