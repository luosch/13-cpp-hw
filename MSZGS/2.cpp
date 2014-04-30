// Copyright 2014 luosch@mail2.sysu.edu.cn
#include <stdio.h>
const long long mod = 1000000007;
int main() {
    long long T, N, A, B, tmp;
    scanf("%lld", &T);
    for (long long cas = 1; cas <= T; cas++) {
        scanf("%lld", &N);
        if (N & 1) {
            long long Bt = ((N-1)/2)%mod;
            long long By = (N-2)%mod;
            B = ((Bt*By)%mod+1)%mod;
            long long tt = ((N+1)/2)%mod;
            long long yy = N%mod;
            A = (tt*tt)%mod;
            A = A*((yy*yy)%mod)%mod;
        } else {
            long long Bt = (N-1)%mod;
            long long By = ((N-2)/2)%mod;
            B = ((Bt*By)%mod+1)%mod;
            long long tt = (N)/2%mod;
            long long yy = (N+1)%mod;
            A = (tt*tt)%mod;
            A = A*((yy*yy)%mod)%mod;
        }
        printf("Case %lld: %lld\n", cas, (A*B)%mod);
    }
    return 0;
}
