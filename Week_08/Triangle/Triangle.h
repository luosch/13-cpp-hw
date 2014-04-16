// Copyright 2014 lsich.com
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
void ssort(const int &a, const int &b, const int &c) {
    int tmp;
    if (a > b) {
        tmp = a;
        a = b;
        b = a;
    }
    if (a > c) {
        tmp = a;
        a = c;
        c = a;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = b;
    }
}
double Heron(int a, int b, int c) {
    double p = (a+b+c+0.0)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
class Triangle {
 public:
    Triangle() {
        cout << "Construct Triangle" << endl;
    }
    virtual void set(int qwe, int asd, int zxc) {
        l1 = qwe;
        l2 = asd;
        l3 = zxc;
    }
    virtual void print() {
        ssort(l1, l2, l3);
        if ((l1+l2) <= l3) {
            cout << "It is not a Triangle 0-0" << endl;
        } else {
            cout << "It is a Triangle  =-=" << endl;
        }
    }
    double area() const {
        return Heron(l1, l2, l3);
    }

 protected:
    int l1;
    int l2;
    int l3;
};
class IsoscelesTriangle: virtual public Triangle {
 public:
    IsoscelesTriangle() {
        cout << "Construct IsoscelesTriangle" << endl;
    }
    void print() {
        ssort(l1, l2, l3);
        if (l1 == l2 || l2 == l3) {
            cout << "It is a IsoscelesTriangle 0-0" << endl;
        } else {
            cout << "It is not a IsoscelesTriangle  =-=" << endl;
        }
    }
};
class RightTriangle: virtual public Triangle {
 public:
    RightTriangle() {
        cout << "Construct RightTriangle" << endl;
    }
    void print() {
        ssort(l1, l2, l3);
        if (l1*l1+l2*l2 == l3*l3) {
            cout << "It is a RightTriangle 0-0" << endl;
        } else {
            cout << "It is not a RightTriangle  =-=" << endl;
        }
    }
};
class IsoscelesRightTriangle: public IsoscelesTriangle, public RightTriangle {
 public:
    IsoscelesRightTriangle() {
        cout << "Construct IsoscelesRightTriangle" << endl;
    }
    void print() {
        ssort(l1, l2, l3);
        if (l1*l1+l2*l2 == l3*l3 && (l1 == l2 || l2 == l3)) {
            cout << "It is a IsoscelesRightTriangle 0-0" << endl;
        } else {
            cout << "It is not a IsoscelesRightTriangle  =-=" << endl;
        }
    }
};
#endif
