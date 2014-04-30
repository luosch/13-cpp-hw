#include <iostream>
#include <string>
#include "Counter.h"
using std::cin;
using std::cout;
using std::endl;
int main() {
    Counter c;
    string temp;
    cin >> temp;
    c.extract(temp);
    cout << c.query("C++") << endl;
    cout << c.query("Python") << endl;
    cout << c.query("C") << endl;
    cout << c.query("Perl") << endl;
    cout << c.query("Haskell") << endl;
    cout << c.query("Lua") << endl;
    cout << c.query("C#") << endl;
    return 0;
}
