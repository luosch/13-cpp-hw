#include<iostream>
using std::cin;
using std::cout;
using std::endl;
 
int main() {
  double a = 10000;
  int b;
  cin >> b;
  if (b > 100)
    b = b % 100;
  while (b--) {
    a *= 1.05;
  }
  b = a;
  cout << b << endl;
  return 0;
}