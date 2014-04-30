#include "head.h"
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double x, y;
    x = readNumber();
    y = readNumber();
    printFormatted(x, y);
}