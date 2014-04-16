// Copyright 2014 lsich.com
#include <string>
#include <iostream>
#include "R18.h"
using std::string;
using std::cout;
using std::endl;
R18* R18::getInstance() {
    R18* ans = new R18;
    return ans;
}
void R18::date_a_girl(const int &name) {
    if (dated != "") dated+=",";
    dated+=name+'A'-1;
}
string R18::girls_dated() const {
    return dated;
}
