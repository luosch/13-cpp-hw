#include <iostream>
#include <cmath>
#include "Triangle.h"
 
using std::cin;
using std::cout;
using std::endl;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    Triangle t;
    IsoscelesTriangle i;
    RightTriangle r;
    IsoscelesRightTriangle ir;
 
    Triangle* tri = &t;
    Triangle* iso =  &i;
    Triangle* rig = &r;
    Triangle* ist = &ir;
 
    tri -> set(a, b, c);
    iso -> set(a, b, c);
    rig -> set(a, b, c);
    ist -> set(a, b, c);
 
    cout << tri -> area() << endl;
    tri -> print();
    iso -> print();
    rig -> print();
    ist -> print();
 
  return 0;
}
