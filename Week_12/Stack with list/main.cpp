#include "myStack.h"
#include <iostream>
#include <string>
using namespace std;
 
int main() {
  Stack<int> s;
  cout << (s.empty() ? "empty" : "not empty") << endl;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    s.push(t);
  }
  cout << s.size() << endl;
  cout << s.top() << endl;
  cout << (s.empty() ? "empty" : "not empty") << endl;
  return 0;
}