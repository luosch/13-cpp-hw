#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        bool ans = 1;
        int L;
        string s1, s2;
        string s3, s4;
        cin >> L;
        cin >> s1 >> s2;
        int k = -1;
        int m = 0;
        while (s1[++k] != '\0') {
            if (s1[k] >= '0' && s1[k] <= '9') {
                m = 10*m + s1[k]-'0';
            }
            if (s1[k] >= 'a' && s1[k] <= 'z') {
                s3.append(m, s1[k]);
                m = 0;
            }
        }
        m = 0;
        k = -1;
        while (s2[++k] != '\0') {
            if (s2[k] >= '0' && s2[k] <= '9') {
                m = 10*m + s2[k]-'0';
            }
            if (s2[k] >= 'a' && s2[k] <= 'z') {
                s4.append(m, s2[k]);
                m = 0;
            }
        }
        int len1 = s3.length();
        int len2 = s4.length();
        if (len1 != len2) {
            ans = 0;
            cout << "Case " << cas << ": ";
            if (ans) cout << "Yes" << endl;
            else cout << "No" << endl;
            continue;
        }
        int h = len1 / L;
        string a[h];
        string b[h];
        for (int i = 0; i < len1; i++) {
            a[i%h] += s3[i];
        }
        for (int i = 0; i < len2; i++) {
            b[i%h] += s4[i];
        }
        sort(a, a+h);
        sort(b, b+h);
        for (int i = 0; i < h; i++) {
            if (a[i] != b[i]) {
                ans = false;
                break;
            }
        }
        cout << "Case " << cas << ": ";
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}