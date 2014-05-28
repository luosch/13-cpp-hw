#include <iostream>
#include "complex.hpp"
using namespace std;
 
int main() {
  int a, b, c, d;
  double w, x, y, z;
  cin >> a >> b >> c >> d;
  w = a + 0.28125222;
  x = b + 0.81392423;
  y = c + 0.17231172;
  z = d + 0.02748234;
 
  Complex<int> icpxa(a, b);
  Complex<int> icpxb(c, d);
  Complex<double> lfcpxa(w, x);
  Complex<double> lfcpxb(y, z);
 
  cout << icpxa << " + " << icpxb << " = " << icpxa + icpxb << endl;
  cout << icpxa << " - " << icpxb << " = " << icpxa - icpxb << endl;
  cout << icpxa << " * " << icpxb << " = " << icpxa * icpxb << endl;
  cout << icpxa << " / " << icpxb << " = " << icpxa / icpxb << endl;
 
  cout << lfcpxa << " + " << lfcpxb << " = " << lfcpxa + lfcpxb << endl;
  cout << lfcpxa << " - " << lfcpxb << " = " << lfcpxa - lfcpxb << endl;
  cout << lfcpxa << " * " << lfcpxb << " = " << lfcpxa * lfcpxb << endl;
  cout << lfcpxa << " / " << lfcpxb << " = " << lfcpxa / lfcpxb << endl;
 
  return 0;
}