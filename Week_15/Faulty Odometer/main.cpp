// Copyright (c) lsich.com
#include <cstdio>
#include <cstring>
int main() {
    freopen("in.txt", "r", stdin);
    char num[100];
    while (scanf("%s", num) && num[0] != '0') {
        int len = strlen(num)-1, base = 1, ans = 0;
        for (int i = len; i >= 0; i--) {
            ans += num[i] > '4' ? (num[i]-1-'0')*base : (num[i]-'0')*base;
            base*=9;
        }
        printf("%s: %d\n", num, ans);
    }
    return 0;
}
