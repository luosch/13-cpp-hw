#include <iostream>
#include <string>
#include "MidToLast.h"
#include "stack.h"
using namespace std;
 
string MidToLast::transfer(string str) {
  int len = str.length();
  Stack s;
  string strtemp;
  int length = 0;
  for (int i = 0; i < len; i++) {
    char c = str[i];
    if (c >= '0' && c <= '9') {
      strtemp.push_back(c);
    } else {
      if (s.empty() || c == '(') {
        s.push(c);
      } else {
        char temp = s.top();
        if (c == ')') {
          length = s.size();
          while (length) {
            char tmp = s.top();
            s.pop();
            if (tmp == '(')
              break;
            else
              strtemp.push_back(tmp);
              length--;
          }
        } else {
          if (temp == '*' || temp == '/') {
            if (c == '*' || c == '/') {
              s.push(c);
            } else {
              length = s.size();
              while (length) {
                char tmp = s.top();
                s.pop();
                if (tmp == '(')
                  break;
                else
                  strtemp.push_back(tmp);
                  length--;
              }
              s.push(c);
            }
          } else {
            s.push(c);
          }
        }
      }
    }
  }
  if (s.size() != 0) {
    length = s.size();
    while (length) {
      char tmp = s.top();
      strtemp.push_back(tmp);
      s.pop();
      length--;
    }
  }
  return strtemp;
}
/*#include "stack.h"
#include <string>
#include <iostream>
#include "MidToLast.h"
using std::string;
using std::cout;
using std::endl;
int prop(char x) {
    if (x>='0'&&x<='9') return 0;
    if (x=='+'||x=='-') return 3;
    if (x=='*'||x=='/') return 4;
    if (x=='(') return 1;
    if (x==')') return 2;
}    
string MidToLast::transfer(string s) {
    string ans;
    Stack op;
    for (int i = 0; i < s.size(); i++) {
        if (prop(s[i])==0) {
            ans+=s[i];
        } else if (op.empty()) {
            op.push(s[i]);
        } else if (prop(s[i])==1) {
            op.push(s[i]);
        } else if (prop(s[i])==2) {
            while (op.top()!='(') {
                ans+=op.top();
                op.pop();
            }
            op.pop();
        } else {
            while (!op.empty()&&prop(op.top())>=prop(s[i])) {
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
}*/    
