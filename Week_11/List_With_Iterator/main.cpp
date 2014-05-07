#include <iostream>
#include <string>
#include <cstdio>
#include "myList.h"
using namespace std;
 
int main() {
  freopen("input.txt", "r", stdin);
  list<int> li;
  cout << "test size" << endl;
  cout << li.size() << endl;
  cout << (li.empty() ? "empty" : "not empty") << endl;
  int n;  // n >= 3
  cout << "test push and pop" << endl;
  li.push_back(1);
  cout << li << endl;
  li.pop_back();
  cout << li << endl;
  li.push_front(1);
  cout << li << endl;
  li.pop_front();
  cout << li << endl;
  li.push_back(1);
  cout << li << endl;
  li.pop_front();
  cout << li << endl;
  li.push_front(1);
  cout << li << endl;
  li.pop_back();
  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    li.push_back(tmp);
    li.push_front(tmp);
    cout << li << endl;
  }
  cout << li.size() << endl;
  cout << li << endl;
  cout << "front : " << li.front() << endl;
  cout << "back : " << li.back() << endl;
  li.pop_back();
  li.pop_front();
  li.pop_front();
  cout << li << endl;
  cout << "front : " << li.front() << endl;
  cout << "back : " << li.back() << endl;
  cout << (li.empty() ? "empty" : "not empty") << endl;
 
  cout << "test begin and end" << endl;
  list<int>::iterator it = li.begin();
  while (it != li.end()) {
    cout << it->data << " ";
    it++;
  }
  cout << endl;
 
  cout << "test insert and erase and ++ --" << endl;
  it = li.begin();
  cout << *(li.insert(it, 100)) << endl;
  it = li.end();
  cout << *(li.insert(it, 200)) << endl;
  cout << li << endl;
  it = li.begin();
  cout << *(li.erase(++it)) << endl;
  it = li.begin();
  it++;
  cout << *(li.erase(it)) << endl;
  cout << li << endl;
  it = li.begin();
  it++;
  it--;
  li.insert(it, 101);
  it = li.begin();
  ++it;
  --it;
  li.insert(it, 99);
  cout << li << endl;
  it = li.begin();
  *it = 90;
 
  cout << "test constructor" << endl;
  list<int> li2(5, 9);
  list<int> li3(li);
  it = li.begin();
  list<int>::iterator it2 = it;
  ++(++(++it2));
  list<int> li4(li.begin(), li.end());
  cout << *it << endl;
  list<int> li5(it, it2);
  cout << li2 << endl;
  cout << li3 << endl;
  cout << li4 << endl;
  cout << li5 << endl;
 
  return 0;
}