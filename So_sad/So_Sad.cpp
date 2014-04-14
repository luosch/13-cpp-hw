// Copyright 2014 www.lsich.com
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class Num {
 public:
    Num() {
        int tmp = b_;
        b_ = a_ + b_;
        a_ = tmp;
    }
    ~Num() {
        a_ = 0;
        b_ = 1;
    }
    static int getAns() {return a_;}
 private:
    static int a_;
    static int b_;
};
int Num::a_ = 0;
int Num::b_ = 1;
int rec(int x) {
    int n;
    cin >> n;
    Num *p = new Num[n];
    cout << Num::getAns() << endl;
    delete []p;
    x && rec(x-1);
    return 1;
}
int main() {
    int T, n;
    cin >> T;
    rec(T-1);
    return 0;
}
