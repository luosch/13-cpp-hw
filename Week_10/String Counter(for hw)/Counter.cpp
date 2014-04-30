// Copyright 2014 lsich
#include "Counter.h"
#include <string>
using std::string;
void Counter::extract(string res) {
    int st = 0, ed = 0, len = res.length();
    while (ed < len) {
        if (res[ed] != ';') {
            ed++;
        } else {
            string tmp = res.substr(st, ed-st);
            m[tmp]++;
            ed++;
            st = ed;
        }
    }
    m[res.substr(st, ed-st)]++;
}
int Counter::query(string find) {return m[find];}
