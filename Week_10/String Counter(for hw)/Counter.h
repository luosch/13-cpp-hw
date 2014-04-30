#ifndef Counter_H
#define Counter_H
#include <iostream>
#include <map>
#include <string>
using std::istream;
using std::cout;
using std::endl;
using std::string;
using std::map;
class Counter {
    public:
        void extract(string);
        int query(string);
    private:
        map<string, int>m;
};
#endif