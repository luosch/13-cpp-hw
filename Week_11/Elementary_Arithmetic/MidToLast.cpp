// Copyright 2014 lsich
#include <stack>
#include <string>
#include "MidToLast.h"
using std::stack;
using std::string;
inline int arithmetic(int a, int b, char type) {
    if (type == '+') return a+b;
    if (type == '-') return a-b;
    if (type == '*') return a*b;
    if (type == '/') return a/b;
    if (type == '%') return a%b;
}
inline int prop(char x) {
    if (x >= '0' && x <= '9') return 0;
    if (x == '+' || x == '-') return 3;
    if (x == '*' || x == '/' || x == '%') return 4;
    if (x == '(') return 1;
    if (x == ')') return 2;
}
string MidToLast::transfer(string s) {
    string ans;
    stack<char> op;
    for (int i = 0; i < s.size(); i++) {
        if (prop(s[i]) == 0) {
            ans+=s[i];
        } else if (op.empty()) {
            op.push(s[i]);
        } else if (prop(s[i]) == 1) {
            op.push(s[i]);
        } else if (prop(s[i]) == 2) {
            while (op.top() != '(') {
                ans+=op.top();
                op.pop();
            }
            op.pop();
        } else {
            while (!op.empty() && prop(op.top()) >= prop(s[i])) {
                ans+=op.top();
                op.pop();
            }
            op.push(s[i]);
        }
    }
    while (!op.empty()) {
        ans+=op.top();
        op.pop();
    }
    return ans;
}
int MidToLast::calculate(string str) {
    stack<int> S;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (prop(str[i]) == 0) {
            S.push(str[i]-'0');
        } else {
            int b, a;
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();
            S.push(arithmetic(a, b, str[i]));
        }
    }
    return S.top();
}
