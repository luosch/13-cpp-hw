#ifndef _VECTOR_POINT_H_
#define _VECTOR_POINT_H_
 
#include <iostream>
using std::ostream;
 
class Vector;
 
class Point {
 public:
  Point();
  Point(int x, int y);
  // copy constructor
  Point(const Point& other);
  // declare as friend function for class Vector
  friend Point operator+(const Point& point, const Vector& other);
  // overloading operator <<, format : "1 2"
  friend ostream& operator<<(ostream& out, const Point& point);
 
 private:
  int x_;
  int y_;
};
 
 
class Vector {
 public:
  Vector();
  Vector(int x, int y);
  // copy constructor
  Vector(const Vector& other);
  Vector operator+(const Vector& other);
  // declare as friend function for class Vector
  friend Point operator+(const Point& point, const Vector& other);
  // overloading operator <<, format : "1 2"
  friend ostream& operator<<(ostream& out, const Vector& vect);
 
 private:
  int x_;
  int y_;
};
 
#endif  // _VECTOR_POINT_H_
