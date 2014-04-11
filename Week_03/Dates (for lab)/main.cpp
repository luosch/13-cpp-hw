// Lab 2: DateTest.cpp
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "Date.h"  // include definitions of class Date
 
int main() {
    int MAXDAYS;
    cin >> MAXDAYS;
    Date d(12, 24, 2004);  // instantiate object d of class Date
    // output Date object d's value
    for ( int loop = 1; loop <= MAXDAYS; ++loop ) {
      d.print();  // invokes function print
      d.nextDay();  // invokes function next day
    }  // end for
    cout << endl;
    while(1);
    return 0;
}  // end main
