#include <cstdio>
#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>
using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::transform;
int main() {
    int T, pos;
    string lsc;
    cin >> T;
    while (T--) {
        cin >> pos >> lsc;
        lsc.erase(pos-1, 1);
        transform(lsc.begin(), lsc.end(), lsc.begin(), toupper);
        cout << lsc << endl;
    }
    return 0;
}
