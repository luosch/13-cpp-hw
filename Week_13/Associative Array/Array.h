#ifndef ARRAY_H
#define ARRAY_H
#include <map>
#include <string>
using std::map;
using std::string;
class Array {
 public:
    int& operator [](const int &_index) {
        return __numberArray[_index];
    }
    int& operator [](const string &_index) {
        return __stringArray[_index];
    }

 private:
    map<int, int> __numberArray;
    map<string, int> __stringArray;
};

#endif
