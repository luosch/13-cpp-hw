#include "Point.h"
#include <iostream>
using std::cout;
using std::endl;
Point::Point(int xxxx, int yyyy) {
    x = xxxx;
    y = yyyy;
}    
void Point::setPoint(int x1x, int y1y) {
	x = x1x;
	y = y1y;
}    
int Point::getX() const {return x;}
int Point::getY() const {return y;}
void Point::print() const {
	cout << "This Point is [" << x << ", " << y << "]" << endl;
}
