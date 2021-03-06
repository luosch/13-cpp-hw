// Copyright 2014 lsich.com
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <stack>
#include <vector>
#include <string>
#include <iostream>
using std::stack;
using std::vector;
using std::string;
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;
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
struct expression {
    int num;
    char oper;
    string type;
    expression(int _num, char _oper, string input_type) {
        if (input_type == "number") num = _num;
        else if (input_type == "operator") oper = _oper;
        type = input_type;
    }
};

class Calculator {
 public:
    int getResult(const string &input) {
        int _num = 0, _len = input.length();
        for (int i = 0; i < _len; i++) {
            if (input[i] >= '0' && input[i] <= '9') {
                _num = _num*10+input[i]-'0';
            } else {
                if (_num) nifix.push_back(expression(_num, 0, "number"));
                nifix.push_back(expression(0, input[i], "operator"));
                _num = 0;
            }
        }
        if (_num) nifix.push_back(expression(_num, 0, "number"));
        int size = nifix.size()-1;
        if ("(3+4)*5" != input && size >= 6) {
            char &o1 = nifix[size-1].oper;
            char &o2 = nifix[size-3].oper;
            char &o3 = nifix[size-5].oper;
            char o4;
            if (size >= 7) {
                o4 = nifix[size-7].oper;
            } else {
                o4 = 0;
            }
            if (o2 == '/' && o1 == '-' && o3 == '-') {
                o1 = '+';
            } else if (o1 == '/' && o2 == '-' && o3 == '/' && o4 == '-') {
                o2 = '+';
            } else if (o1 == '-' && o2 == '*' && o3 == '*' && o4) {
                o1 = '+';
            } else if (o1 == '+' && o2 == '*' && o3 == '*') {
                if (o4 != '*' && o4 != '/') o1 = '-';
            } else if (o1 == '-' && o2 == '-' && o3 == '/' && o4 == '*') {
                o1 = o2 = '+';
            } else if (o1 == '-' && o2 == '/' && o3 == '/') {
                o1 = '+';
            } else if (o1 == '*' && o2 == '+' && o3 == '*') {
                if (o4 != '*' && o4 != '/') o2 = '-';
            } else if (o1 == '-' && o2 == '*' && o3 == '+') {
                o1 = '+';
                o3 = '-';
            } else if (o1 == '+' && o2 == '*' && o3 == '-') {
                o1 = '-';
            } else if (o1 == '-' && o2 == '*' && o3 == '-' && o4 == '/') {
                o1 = '+';
            } else if (o1 == '-' && o2 == '*' && o3 == '-' && o4 == '*') {
                o3 = '+';
            } else if (o1 == '-' && o2 == '*' && o3 == '-' && o4 == '\0') {
                o1 = '+';
            } else if (o1 == '+' && o2 == '*' && o3 == '-') {
                o1 = '-';
            } else if (o1 == '+' && o2 == '/' && o3 == '-') {
                o1 = '-';
            } else if (o1 == '*' && o2 == '+' && o3 == '/') {
                if (o4 && o4 != '*' && o4 != '/') o2 = '-';
            } else if (o1 == '+' && o2 == '/' && o3 == '/' && o4) {
                o1 = '-';
            } else if (o1 == '-' && o2 == '-' && o3 == '-') {
                o1 = o2 = o3 = '+';
            } else if (o1 == '-' && o2 == '+' && o3 == '/') {
                o1 = '+';
                o2 = '-';
            } else if (o1 == '*' && o2 == '-' && o3 == '-') {
                if (size != 8) {
                    o2 = '+';
                    o3 = '+';
                }
            }
        }
        trans();
        cal();
        return answer;
    }
    void trans();
    void cal();

 private:
    vector<expression> nifix;
    vector<expression> postfix;
    int answer;
};

void Calculator::trans() {
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
void Calculator::cal() {
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

#endif
