#include <iostream>
#include "streamManipulator.h"
 
using std::cout;
using std::cin;
int main() {
    int integer;
    cin >> integer;
    StreamManipulator s(integer);
 
    s.showInDecimal();
    s.showInOctal();
    s.showInHexadecimal();
    s.setNumber(10);
    s.showInDecimal();
    s.showInOctal();
    s.showInHexadecimal();
    double target;
    int precision;
    cin >> target >> precision;
 
    s.printInPrecision(target, precision);
    int FahrenTemp;
    cin >> FahrenTemp;
    s.convertFahrenToCelsis(FahrenTemp);
    return 0;
}