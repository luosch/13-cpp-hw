#include <iostream>
#include <string>
#include <cstdio>
#include "MidToLast.h"
using std::cin;
using std::cout;
using std::endl;
int main() {
    // freopen("in.txt", "r", stdin);
    string nifix, postfix;
    int answer, T;
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> nifix;
        MidToLast mtl;
        postfix = mtl.transfer(nifix);
        answer = mtl.calculate(postfix);
        cout << "Case " << cas << ":" << endl;
        cout << "Postfix Expression : " << postfix << ' ' << endl;
        cout << "XueZha finally calculated : " << answer << endl;
    }
    return 0;
}
