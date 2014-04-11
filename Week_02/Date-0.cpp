#include "Date.h"
#include <string.h>
using std::string;
void Date::reset() {
    year = 2012;
    month = 12;
    day = 05;
}
void Date::set(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}
void Date::fromStr(std::string str) {
    year = (str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0')*10+str[3]-'0';
    month = (str[5]-'0')*10+str[6]-'0';
    day = (str[8]-'0')*10+str[9]-'0';
}
std::string Date::toStr() const {
    string res;
    res.resize(10, 0);
    res[0] = year/1000+'0';
    res[1] = year/100%10+'0';
    res[2] = year/10%10+'0';
    res[3] = year%10+'0';
    res[4] = '-';
    res[5] = month/10+'0';
    res[6] = month%10+'0';
    res[7] = '-';
    res[8] = day/10+'0';
    res[9] = day%10+'0';
    return res;
}
