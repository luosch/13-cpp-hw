#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int T;
    double A, B, C;
    string wage;
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> A >> wage >> B >> wage >> C >> wage;
        cout << A << ' '<< B << ' ' << C << ' ' << endl;
        printf("Case %d: ", cas);
        cout << fixed << setprecision(2) << (A*C)/B << "px" << endl;
    }
    return 0;
}