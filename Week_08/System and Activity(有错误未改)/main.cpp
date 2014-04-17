#include <iostream>
#include <string>
#include "SystemActivity.h"
 
using std::cin;
using std::cout;
using std::endl;
using std::string;
 
int main() {
  string a, b;
  cin >> a >> b;
  Linux l;
  Windows w;
  System * linux = reinterpret_cast<System *> (&l);
  System * windows = reinterpret_cast<System *> (&w);
 
  Study s1(linux, a);
  Study s2(windows, a);
  Game g1(windows, b);
  Game g2(linux, b);
  Activity * activity1 = reinterpret_cast<Activity *> (&s1);
  Activity * activity2 = reinterpret_cast<Activity *> (&s2);
  Activity * activity3 = reinterpret_cast<Activity *> (&g1);
  Activity * activity4 = reinterpret_cast<Activity *> (&g2);
 
  cout << activity1->play() << endl;
  cout << activity2->play() << endl;
  cout << activity3->play() << endl;
  cout << activity4->play() << endl;
 
  return 0;
}
