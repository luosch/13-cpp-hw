#include <iostream>
#include <string>
#include "Pair.h"
using namespace std;
 
int main() {
    string a[2];
    int b[2];
    cin >> a[0] >> b[0] >> a[1] >> b[1];
    Pair<string, int> p1, p2;
    p1.setFirst(a[0]);
    p1.setSecond(b[0]);
    p2.setFirst(a[1]);
    p2.setSecond(b[1]);
    cout << p1.getFirst() << " " << p1.getSecond() << endl;
    cout << p2.getFirst() << " " << p2.getSecond() << endl;
    p1.swap(p2);
    cout << p1.getFirst() << " " << p1.getSecond() << endl;
    cout << p2.getFirst() << " " << p2.getSecond() << endl;
    return 0;
}
