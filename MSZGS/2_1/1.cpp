#include <iostream>
using namespace std;
int main() {
    unsigned long long T, N;
    string wa = "no solution";
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> N;
        cout << "Case " << cas << ": ";
        if (N == 1 || N == 2) cout << wa << endl;
        else if (N == 4) cout << 6 << ' ' << 3 << ' ' << 1 << endl;
        else if (N & 1) cout << N+1 << ' ' << 2 << ' ' << 1 << endl;
        else if (N%4 == 0) cout << 2*N-4 << ' ' << N-2 << ' ' << 2 << endl;
        else cout << N+2 << ' ' << 4 << ' ' << 2 << endl;
    }
    return 0;
}