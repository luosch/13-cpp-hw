#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string base, A, B;
    getline(cin, base);
    cin >> A >> B;
    int st = 0, x = base.find(A);
    while (x != -1 && x >= st && st < base.length()) {
        cout << base.substr(st, x-st);
        cout << B;
        st = x + A.length();
        base[x] = 0;
        x = base.find(A);
    }
    if (base.length() > st) cout << base.substr(st, base.length()-st) << endl;
    else cout << endl;
    return 0;
}
