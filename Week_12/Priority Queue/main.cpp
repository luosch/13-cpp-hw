// Copyright 2014 lsich.com
#include <cstdio>
bool check(int, int, int[]);

int main() {
    int T, n, m;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        int queue[2000], head = 0, rear = n-1, pos = 0, time = 0;
        for (int i = 0; i < n; i++) scanf("%d", &queue[i]);
        while (!(pos == m && check(pos, rear, queue))) {
            if (check(pos, rear, queue)) {
                head++;
                time++;
            } else if (pos == m) {
                m+=(rear-head+1);
                queue[++rear] = queue[head++];
            } else {
                queue[++rear] = queue[head++];
            }
            pos++;
        }
        printf("%d\n", ++time);
    }
}

bool check(int i, int r, int queue[]) {
    for (int j = i+1; j <= r; j++) if (queue[j] > queue[i]) return 0;
    return 1;
}
