#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "Point.h"
 
#define PI 3.14159
 
class Circle : public Point {
 public:
  // default constructor
  Circle(double r = 0.0, int x = 0, int y = 0);
  void setRadius(double r);    // set radius
  double getRadius() const;    // return radius
  double area() const;         // calculate area
  void print() const;  // print the center point and the radius
 protected:          // accessible to derived classes
  double radius;   // radius of the Circle
};  // end class Circle
#endif
