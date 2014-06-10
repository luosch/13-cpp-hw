#include <cstdio>
int len, S[110], ans;
bool left(int lsc) {
    for (int i = 0; S[i] != lsc; i++) {
        if (S[i] > lsc) return 0;
    }
    return 1;
}
bool right(int lsc) {
    for (int i = len-1; S[i] != lsc; i--) {
        if (S[i] < lsc) return 0;
    }
    return 1;
}
int main() {
    freopen("in.txt", "r", stdin);
    while (~scanf("%d", &len)) {
        for (int i = 0; i < len; i++) scanf("%d", S+i);
        ans = 0;
        for (int i = 0; i < len; i++) {
            if (left(S[i]) && right(S[i])) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
