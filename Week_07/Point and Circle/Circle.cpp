#include "Circle.h"
#include <iostream>
#define Pi 3.14159
using std::cout;
using std::endl;
Circle::Circle(double r1r, int x1x, int y1y) {
    Point::Point(x1x, y1y);
    radius = r1r;
}    
void Circle::setRadius(double r1r) {
	radius = r1r;
}    
double Circle::getRadius() const {return radius;}
double Circle::area() const {return Pi*radius*radius;}
void Circle::print() const {
	cout << "The center of Circle is [" << x << ", " << y << "]" << endl;
    cout << "The radius of Circle is " << radius << endl;
}

