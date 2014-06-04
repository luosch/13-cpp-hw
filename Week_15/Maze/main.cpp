// Copyright (c) lsich.com
#include <cstdio>
#include <cstring>
#include <queue>
using std::queue;
const int maxn = 30;
const int move[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m, ans;
char maze[maxn][maxn];
bool vis[maxn][maxn];
struct node {
    int x, y, step;
    bool isValid() {
        return maze[x][y] != '!' && maze[x][y] != '#' &&
        !vis[x][y] && x >= 0 && x < n && y >= 0 && y < m;
    }
    bool isEnd() {return maze[x][y] == 'E';}
} u, tmp;
inline void bfs() {
    queue<node> q;
    q.push(tmp);
    memset(vis, 0, sizeof(vis));
    vis[tmp.x][tmp.y] = 1;
    ans = -1;
    while (!q.empty()) {
        u = q.front();
        q.pop();
        if (u.step > n*m) return;
        if (u.isEnd()) {
            ans = u.step;
            return;
        }
        for (int i = 0; i <= 3; i++) {
            tmp.x = u.x+move[i][0];
            tmp.y = u.y+move[i][1];
            tmp.step = u.step+1;
            if (tmp.isValid()) {
                vis[tmp.x][tmp.y] = 1;
                q.push(tmp);
            }
        }
    }
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%s", maze[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (maze[i][j] == 'S') {
                tmp.x = i;
                tmp.y = j;
                tmp.step = 0;
                break;
            }
    bfs();
    printf("%d\n", ans);
    return 0;
}
