#include "match.h"
#include <cstring>
bool Match::isMatch(char *s) {
    Stack tmp;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
            tmp.push(s[i]);
        } else {
            if (s[i] == '}') {
                if (tmp.top() == '{') tmp.pop();
                else tmp.push(s[i]);
            }
            if (s[i] == ')') {
                if (tmp.top() == '(') tmp.pop();
                else tmp.push(s[i]);
            }
            if (s[i] == ']') {
                if (tmp.top() == '[') tmp.pop();
                else tmp.push(s[i]);
            }
        }
    }
    return tmp.isEmpty();
}
