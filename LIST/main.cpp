#include "newList.h"
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
const double eps = 1e-6;
void func886(const int &x) {
    if (x >= 0) const_cast<int&>(x) = 886;
}

void func520(const double &x) {
    if (fabs(x) >= eps) const_cast<double&>(x) = 520;
}

int main() {
    int T;
    void (*haha)(const int &) = func886;
    void (*hehe)(const double &) = func520;
    newList<int> a;
    newList<double> b;
    cin >> T;
    for (int i = 0; i < T; i++) {
        a.push_back(i-4);
        b.push_back(i-3.1);
    }
    a.traverse(haha);
    b.traverse(hehe);
    a.find(886);
    b.find(520);
    return 0;
}
