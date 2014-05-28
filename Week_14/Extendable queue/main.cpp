#include <iostream>
#include "equeue.hpp"
using namespace std;
 
int cnum = 0;
Queue<int> iq;
Queue<double> lfq;
 
void display() {
  cout << iq.front() << " " << iq.size() << " ";
  cout << lfq.front() << " " << lfq.size() << endl;
}

int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; ++i) {
    lfq.push(cnum+0.1205);
    iq.push(cnum++);
  }
  display();
  for (int i = 0; i < 500; ++i) {
    lfq.push(cnum+0.1205);
    iq.push(cnum++);
  }
  display();
  for (int i = 0; i < a; ++i) {
    lfq.pop();
    iq.pop();
  }
  display();
  cin >> a;
  for (int i = 0; i < a; ++i) {
    lfq.pop();
    iq.pop();
  }
  display();
  iq.clear();
  lfq.clear();
  cin >> a;
  for (int i = 0; i < a; ++i) {
    lfq.push(cnum+0.1205);
    iq.push(cnum++);
  }
  for (int i = 0; i < a/2; ++i) {
    lfq.pop();
    iq.pop();
  }
  display();
  return 0;
}