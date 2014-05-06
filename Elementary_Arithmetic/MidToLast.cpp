// Copyright 2014 lsich
#include "MidToLast.h"
inline int prop(char x) {
    if (x == '(') return 1;
    if (x == ')') return 2;
    if (x == '+' || x == '-') return 3;
    if (x == '*' || x == '/' || x == '%') return 4;
}
inline int arithmetic(int a, int b, char op) {
    if (op == '+') return a+b;
    if (op == '-') return a-b;
    if (op == '*') return a*b;
    if (op == '/') return a/b;
    if (op == '%') return a%b;
}
void MidToLast::transfer() {
    int size = nifix.size();
    stack<char> op;
    for (int i = 0; i < size; i++) {
        if (nifix[i].type == "number") {
            postfix.push_back(nifix[i]);
        } else if (op.empty()) {
            op.push(nifix[i].oper);
        } else if (prop(nifix[i].oper) == 1) {
            op.push(nifix[i].oper);
        } else if (prop(nifix[i].oper) == 2) {
            while (op.top() != '(') {
                postfix.push_back(expression(0, op.top(), "operator"));
                op.pop();
            }
            op.pop();
        } else {
            while (!op.empty() && prop(op.top()) >= prop(nifix[i].oper)) {
                postfix.push_back(expression(0, op.top(), "operator"));
                op.pop();
            }
            op.push(nifix[i].oper);
        }
    }
    while (!op.empty()) {
        postfix.push_back(expression(0, op.top(), "operator"));
        op.pop();
    }
}
void MidToLast::calculate() {
    stack<int> S;
    int size = postfix.size();
    for (int i = 0; i < size; i++) {
        if (postfix[i].type == "number") S.push(postfix[i].num);
        if (postfix[i].type == "operator") {
            int b = S.top();
            S.pop();
            int a = S.top();
            S.pop();
            int tmp = arithmetic(a, b, postfix[i].oper);
            S.push(tmp);
        }
    }
    if (S.size() == 1) {
        this->answer = S.top();
        S.pop();
    }
}
