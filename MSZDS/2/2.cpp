#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
struct node {
    node* fa;
    vector<node*> next;
    long long pow;
    int dd;
} tree[1010];
int dh, l, r, N;
long long del;
void dep(node *root) {
    if (!root) return;
    root->dd = dh;
    int size = root->next.size();
    for (int i = 0; i < size; i++) {
        dh++;
        dep(root->next[i]);
        dh--;
    }
}
void dfs(node *u) {
    if (u->dd > r) return;
    if (u->dd >= l) u->pow+=del;
    int size = u->next.size();
    for (int i = 0; i < size; i++) {
        dfs(u->next[i]);
    }
}
long long Hash;
void set(){
    long long MOD =1000000007;
    long long MAGIC= 12347;
    for (int i = 1; i <= N; i++) {
        Hash = (Hash * 12347 + tree[i].pow) % MOD;
    }
}
int main() {
    freopen("in.txt", "r", stdin);
    int T, a, tmp, Q;
    int u;
    scanf("%d", &T);
    for (int cas = 1; cas <= T; cas++) {
        memset(tree, 0, sizeof(tree));
        scanf("%d", &N);
        for (int nn = 2; nn <= N; nn++) {
            scanf("%d", &tmp);
            tree[nn].fa = &tree[tmp];
            tree[tmp].next.push_back(&tree[nn]);
        }
        dh = 0;
        dep(&tree[1]);
        scanf("%d", &Q);
        while (Q--) {
            scanf("%d%d%d%lld", &u, &l, &r, &del);
            dfs(&tree[u]);
        }
        Hash = 0;
        set();
        printf("Case %d: %lld\n", cas, Hash);
    }
}