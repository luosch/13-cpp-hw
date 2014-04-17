#include <iostream>
#include "DouList.h"
using namespace std;
 
DouList list1, list2;
 
void display() {
  cout << list1.empty() << ':' << list1 << endl;
  cout << list2.empty() << ':' << list2.to_str() << endl;
}
 
int main() {
  int t;
  display();
  list1.push_front(894);
  list2.push_back(2136);  
  int t1 = list1.front(), t2 = list1.back();
  cout << t1 << ',' << t2 << endl;
  t1 = list2.front();
  t2 = list2.back();
  cout << t1 << ',' << t2 << endl;
  display();
  list1.push_back(214);
  list2.push_front(931);
  cout << static_cast<int>(list1.front()) << ','
       << static_cast<int>(list1.back()) << endl;
  cout << static_cast<int>(list2.front()) << ','
       << static_cast<int>(list2.back()) << endl;
  display();
  for (int i = 0; i < 5; ++i) {
    cin >> t;
    list1.push_back(t);
    list2.push_front(t);
  }
  display();
  for (int i = 0; i < 2; ++i) {
    list1.pop_front();
    list2.pop_back();
  }
  display();
 
  DouList list4;
  cin >> t;
  list4.push_back(t);
  DouListNode tp;
  tp.sublist = new DouList(list4);
  list1.push_front(tp);
  list2.push_back(tp);
  display();
  delete tp.sublist;
  tp.sublist = 0;
  list4.clear();
  tp.sublist = new DouList();
  list1.push_front(tp);
  cout << list1 << endl;
  list2.push_back(tp);
  cout << list2 << endl;
  delete tp.sublist;
  tp.sublist = 0;
  cout << list1 << endl;
  display();
  for (int i = 0; i < 3; ++i) {
    cin >> t;
    list4.push_back(t);
  }
  tp.sublist = new DouList(list4);
  list1.push_back(tp);
  list2.push_front(tp);
  display();
  delete tp.sublist;
  tp.sublist = 0;
  cin >> t;
  list1.push_front(t);
  list2.push_back(t);
  display();
 
  DouList list3(list1);
  list1 = list2;
  cout << list1 << endl;
  cout << list3 << endl;
  cout << list1.front() << endl;
  cout << static_cast<int>(list1.front().back()) << endl;
  return 0;
}

