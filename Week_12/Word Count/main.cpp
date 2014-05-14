#include <iostream>
#include <cstdio>
#include <string>
#include "WordsCounter.h"
using namespace std;
 
int main() {
  WordsCounter wordsCounter(5);
  cout << wordsCounter("It is so interesting that I like it greatly") << endl;
 
  string text = "it is so interesing that I like it greatly";
  wordsCounter.setBound(2);
  cout << wordsCounter(text) << endl;
 
  int n;
  cin >> n;
  getchar();  // get the enter
  getline(cin, text);
  wordsCounter.setBound(n);
  cout << wordsCounter(text) << endl;
 
  return 0;
}