#include <stdio.h>
int main() {
    int T;
    double W, L, C;
    scanf("%d", &T);
    for (int cas = 1; cas <= T; cas++) {
        scanf("%lf%lf%lf"), &W, &L, &C);
        printf("%lf", W*L/C);
    }
    return 0;
}