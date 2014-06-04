#include <iostream>
#include "calculator.h"
using std::endl;
 
int main() {
    Calculator c;
    char str[100];
    cin >> str;
    cout << c.getResult(str) << endl;
}