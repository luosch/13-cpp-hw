#ifndef ADAPTER_H
#define ADAPTER_H
#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::for_each;
using std::ios_base;
using std::transform;
typedef vector<double>::iterator ite;
double lsc(const double &a, const double &b) {
    return a+b;
}
double zyl(const double &a, const double &b) {
    return a*b;
}
class Adapter {
 public:
    static void show(ite st, ite ed, void (*lsc)(double)) {
        for_each(st, ed, lsc);
    }
    static void add(ite st, ite ed, ite adder, ite sum) {
        transform(st, ed, adder, sum, lsc);
    }
    static void multi(ite st, ite ed, ite prod, double rate) {
        vector<double> mul;
        for (int i = 0; i < 6; i++) mul.push_back(rate);
        transform(st, ed, mul.begin(), prod, zyl);
    }
};

#endif
