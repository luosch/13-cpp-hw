// Copyright 2014 www.lsich.com
#include "date.h"
int mon_num[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
date::date(int yyy, int mmm, int ddd) {
    year = yyy;
    month = mmm;
    day = ddd;
}
bool date::isleap() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int date::daypass() {
    int ans = 0;
    if (this->isleap()) mon_num[2] = 29;
    else
    mon_num[2] = 28;
    for (int i = 1; i < month; i++) {
        ans+=mon_num[i];
    }
    ans+=day;
    return ans;
}
