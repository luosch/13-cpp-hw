#include <iostream>
#include "a.hpp"
using namespace std;
 
int main() {
  int a, b;
  double c, d;
  long long e, f;
  cin >> a >> b;
  c = a + 0.28125222;
  d = b + 2.81392423;
  swap_practice(c, d);
  inc(a);
  inc(d);
  dec(b);
  dec(c);
  e = a;
  f = b;
  cout << c << ":" << d << endl;
  cout << add(a, b) << "," << subtract(a, b) << "," << multiply(a, b) << ","
       << divide(a, b) << endl;
  cout << add(c, d) << "," << subtract(c, d) << "," << multiply(c, d) << ","
       << divide(c, d) << endl;
  cout << add(e, f) << "," << subtract(e, f) << "," << multiply(e, f) << ","
       << divide(e, f) << endl;
  return 0;
}