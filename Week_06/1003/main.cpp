#include <iostream>
#include <string>
#include "stack.h"
#include "MidToLast.h"
using namespace std;
 
int main() {
  string str;
  string d;
  getline(cin, d);
  getline(cin, str);
  MidToLast mtl;
  string strtemp = mtl.transfer(str);
  cout << strtemp << endl;
  while(1);
  return 0;
}
