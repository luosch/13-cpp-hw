// Copyright 2014 lsich
#ifndef MIDTOLAST_H
#define MIDTOLAST_H
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
class MidToLast {
 public:
    friend ostream& operator <<(ostream &output, const MidToLast&oo) {
        cout << oo.answer;
    }
    friend istream& operator >>(istream &input, const MidToLast&oo) {
        MidToLast &inst = const_cast<MidToLast&>(oo);
        int _num;
        char _oper;
        while (input.peek() != '\n') {
            if (input.peek() >= '0' && input.peek() <= '9') {
                input >> _num;
                inst.nifix.push_back(expression(_num, 0, "number"));
            } else {
                input >> _oper;
                inst.nifix.push_back(expression(0, _oper, "operator"));
            }
        }
        input.ignore();
        return input;
    }
    void transfer();  // transfer nifix expression to postfix expression
    void calculate();  // calculate the answer by postfix expression

 private:
    vector<expression> nifix;
    vector<expression> postfix;
    int answer;  // store the answer
};

#endif
