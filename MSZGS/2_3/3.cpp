#include <iostream>
using namespace std;
int main() {
    int T, N, M, ans;
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> N >> M;
        ans = 1;
        cout << "Case " << cas << ": ";
        if (N == 1) {
            cout << 2;
            continue;
        }
        for (int i = 2; i <= N; i++) {
            ans=ans*i+3;
        }
        cout << ans << endl;
    }
    return 0;
}