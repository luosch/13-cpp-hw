#include <string>
#include <iostream>
#include "date.h"
using std::cin;
using std::cout;
using std::endl;
void swapDate(date *a, date *b) {
    if (a->year > b->year) {
        date temp = *a;
        *a = *b;
        *b = temp;
    }
    if (a->year == b->year && a->month > b->month) {
        date temp = *a;
        *a = *b;
        *b = temp;
    }
    else if (a->year == b->year && a->month == b->month && a->day > b->day) {
        date temp = *a;
        *a = *b;
        *b = temp;
    }
}
 
bool isleap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
 
int difyearday(date a, date b) {
    int sum = 0;
    for (int i = a.year; i < b.year; i++) {
        if (isleap(i))
            sum += 366;
        else
            sum += 365;
    }
    return sum;
}
 
int difdays(date a, date b) {
    int sum = difyearday(a, b);
    sum = sum - a.daypass() + b.daypass();
    return sum;
}
 
int main() {
    int day, month, year;
    char temp;
    cin >> year >> temp >> month >> temp >> day;
    date a(year, month, day);
    cin >> year >> temp >> month >> temp >> day;
    date b(year, month, day);
    swapDate(&a, &b);
    cout << difdays(a, b) << endl;
    return 0;
}