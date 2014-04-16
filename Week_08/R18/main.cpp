#include <iostream>
#include <string>
#include "R18.h"
 
using namespace std;
 
int main() {
  R18 *p;
  int t;
  p = R18::getInstance();
  cout << 11 << endl;
  cout << p->girls_dated() << endl;
  cout << 11 << endl;
  for (int i = 0; i < 5; ++i) {
    cin >> t;
    p->date_a_girl(t);
  }
  cout << p->girls_dated() << endl;
  p = R18::getInstance();
  for (int i = 0; i < 5; ++i) {
    cin >> t;
    p->date_a_girl(t);
  }
  cout << p->girls_dated() << endl;
  p = R18::getInstance();
  for (int i = 0; i < 5; ++i) {
    cin >> t;
    p->date_a_girl(t);
  }
  cout << p->girls_dated() << endl;
  return 0;
}
