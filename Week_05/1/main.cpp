#include "Vector_Point.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
int main() {
  Vector v1;
  cout << v1 << endl;
  Point p1;
  cout << p1 << endl;
 
  int vx, vy, px, py;
  cin >> vx >> vy >> px >> py;
  Vector v2(vx, vy);
  Point p2(px, py);
  cin >> vx >> vy;
  Vector v3(vx, vy);
  Vector v4(v2);
 
  cout << p2 + v2 << endl;
  cout << v3 + v4 << endl;
  while(1);
  return 0;
}
