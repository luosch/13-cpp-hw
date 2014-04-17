// Copyright 2014 lsich.com
#include "R18.h"
using std::string;
using std::cout;
using std::endl;
R18 R18::inst;
string to_string(int xxx) {
    string a, b;
    if (xxx == 0) return "0";
    while (xxx) {
        a+=xxx%10+'0';
        xxx/=10;
    }
    for (int i = a.length()-1; i >=0; i--) {
        b+=a[i];
    }
    return b;
}
R18* R18::getInstance() {
    return &inst;
}
void R18::date_a_girl(const int &name) {
    int tmp = name;
    if (dated != "") dated+=",";
    dated+=to_string(tmp);
}
string R18::girls_dated() const {
    return dated;
}
