#include <iostream>
#include <assert.h>
#include <cstdio>
#include "vector.cpp"
#define N 1000000007

using std::cout;
using std::cin;
using std::endl;

int main() {
    // freopen("in.txt", "r", stdin);
    Vector<int> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v1.push_back(tmp);
        cout << v1;
    }
    Vector<int> v2(v1);
    for (int i = 2; i < n; i++) {
        v2[i] = (v2[i-1] + v2[i-2]) % N;
    }
    cout << v2;
    v2.pop_back();
    cout << v2;
    if (n) {
        cout << v1.size() << " " << v2.size()+1 << endl;
        cout << (v1.size() == v2.size()+1) << endl;
        assert(v1.size() == v2.size()+1);
    } else {
        assert(v1.empty());
        assert(v2.empty());
        cout << "All empty" << endl;
    }
    return 0;
}