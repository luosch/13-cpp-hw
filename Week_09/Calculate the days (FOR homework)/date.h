#include <iostream>
using std::cout;
using std::cin;
 
static int monthofyr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
static int monthoflpyr[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 
class date {
    public:
        int year;
        int month;
        int day;
        date(int y, int m, int d);
        bool isleap();
        int daypass();
};
 