#include <iostream>
#include "stack.h"
#include "match.h"
using namespace std;
 
int main() {
  Match mat;
  char str[100];
  cin.getline(str, 100);
  if (mat.isMatch(str)) {
    cout << "Match" << endl;
  } else {
    cout << "Not Match" << endl;
  }
  int n;
  Stack c;
  char temp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    c.push(temp);
  }
  cout << c.top() << endl;
  cout << c.pop() << endl;
  cout << c.getSize() << endl;
  if (c.isEmpty()) {
    cout << "Empty" << endl;
  } else {
    cout << "Not Empty" << endl;
  }
  return 0;
}
