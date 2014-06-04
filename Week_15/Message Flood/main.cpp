// Copyright (c) lsich.com
#include <algorithm>
#include <iostream>
#include <cctype>
#include <cstdio>
#include <string>
#include <set>
using std::transform;
using std::multiset;
using std::string;
using std::cin;
using std::cout;
using std::endl;
multiset<string> lsich;
void add(string tmp) {
    transform(tmp.begin(), tmp.end(), tmp.begin(), tolower);
    lsich.insert(tmp);
}
void del(string tmp) {
    std::transform(tmp.begin(), tmp.end(), tmp.begin(), tolower);
    lsich.erase(tmp);
}
int main() {
    int lsc, zyl;
    while (cin >> lsc && lsc) {
        string lscstr;
        lsich.clear();
        cin >> zyl;
        for (int j = 0; j < lsc; j++) {
            cin >> lscstr;
            add(lscstr);
        }
        for (int j = 0; j < zyl; j++) {
            cin >> lscstr;
            del(lscstr);
        }
        cout << lsich.size() << endl;
    }
    return 0;
}
