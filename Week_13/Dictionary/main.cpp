#include <iostream>
#include <string>
#include <map>
#include "Dict.h"
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> b;
    Dict d;
    d["pixel"] = a;
    d["set"] = b;
    cout << d["pixel"] << endl;
    cout << d["SET"] << endl;
    cout << d["java"] << endl;
    d.remove("pixel");
    d["java"] = "computer element";
    cout << d["pixel"] << endl;
    cout << d.size() << endl;
    cout << d;
}