#include <iostream>
#include "Point.h"
#include "Circle.h"
using std::cin;
using std::cout;
using std::endl;
 
int main() {
    int x, y;
    double r;
    cin >> x >> y;
    Point point;
    point.setPoint(x, y);
    cout << point.getX() << endl;
    cout << point.getY() << endl;
    point.print();
 
    Circle c;
    cin >> x >> y >> r;
    c.setPoint(x, y);
    c.setRadius(r);
    cout << c.getX() << endl;
    cout << c.getY() << endl;
    cout << c.getRadius() << endl;
    cout << c.area() << endl;
    c.print();
 	while (1);
    return 0;
}
