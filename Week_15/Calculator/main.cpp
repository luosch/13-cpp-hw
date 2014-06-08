#include <iostream>
#include <cstdio>
#include "calculator.h"
using std::endl;
 
int main() {
    freopen("in.txt", "r", stdin);
    char str[100];
    while (cin >> str) {
        Calculator c;
        cout << c.getResult(str) << endl;
    }
}