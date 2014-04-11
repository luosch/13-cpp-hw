// Copyright 2014 luosch@mail2.sysu.edu.cn
#include <stdio.h>
int mt[101][101];
int ans, m, n;
bool row[101], col[101];
bool judge() {
    for (int i = 1; i <= m; i++) {
        if (!row[i]) return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (!col[i]) return 0;
    }
    return 1;
}
void dfs(int a, int b, int sum) {
    if (sum >= ans) return;
    if (judge()) {
        ans = sum < ans ? sum : ans;
        return;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (!row[i]&&!col[j]) {
                row[i] = col[j] = 1;
                dfs(i, j, sum+mt[i][j]);
                row[i] = col[j] = 0;
            } else if (!row[i]&&col[j]) {
                row[i] = 1;
                dfs(i, j, sum+mt[i][j]);
                row[i] = 0;
            } else if (row[i]&&!col[j]) {
                col[j] = 1;
                dfs(i, j, sum+mt[i][j]);
                col[j] = 0;
            }
        }
    }
}
int main() {
    // freopen("3_input.txt", "r", stdin);
    int T, tmp;
    scanf("%d", &T);
    for (int cas = 1; cas <= T; cas++) {
        scanf("%d%d", &m, &n);
        ans = 1 << 30;
        tmp = 0;
        for (int i = 0; i < 101; i++) col[i] = row[i] = 0;
        for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++) mt[i][j] = 0;
        for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) scanf("%d", &mt[i][j]);
        dfs(0, 0, tmp);
        printf("Case %d: %d\n", cas, ans);
    }
}
