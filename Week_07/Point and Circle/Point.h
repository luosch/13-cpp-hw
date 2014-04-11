#ifndef POINT_H
#define POINT_H
class Point {
 public:
  Point(int = 0, int = 0);  // default constructor
  void setPoint(int, int);
  int getX() const;
  int getY() const;
  void print() const;
 protected:
  int x, y;   // x and y coordinates of Point
};  // end class Point
#endif
