// Copyright 2014 lsich
#include <iostream>
#include <iomanip>
#include <string>
#include "streamManipulator.h"
using std::setprecision;
using std::string;
using std::fixed;
using std::cout;
using std::endl;
using std::dec;
using std::hex;
using std::oct;
const char *dec_s = "As a decimal number ";
const char *oct_s = "As an octal number ";
const char *hex_s = "As a hexadecimal ";
StreamManipulator::StreamManipulator(int lsc) {_num = lsc;}
void StreamManipulator::setNumber(int lsich) {_num = lsich;}
void StreamManipulator::showInDecimal() {
    cout << dec_s << dec << _num << endl;
}
void StreamManipulator::showInOctal() {
    cout << oct_s << oct;
    if (_num != 0) cout << '0';
    cout << _num << endl;
}
void StreamManipulator::showInHexadecimal() {
    cout << hex_s << hex;
    if (_num != 0) cout << "0x";
    cout << _num << endl;
}
void StreamManipulator::printInPrecision(double out, int prec) {
    cout << "Rounded to " << dec << prec << " digit(s) is ";
    cout << fixed << setprecision(prec) << out << endl;
}
void StreamManipulator::convertFahrenToCelsis(int lsich) {
    cout << "After converting:" << endl;
    cout << dec << lsich << "===>";
    cout << fixed << setprecision(3) << (lsich-32)*5.0/9.0 << endl;
}
