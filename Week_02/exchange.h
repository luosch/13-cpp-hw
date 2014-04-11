#include <string.h>
#include <string>
std::string change1(char* st) {
    std::string res;
    res = st;
    return res;
}
void change2(std::string st1, char *st2) {
    for (int i = st1.length()-1; i >= 0; i--) {
        st2[i] = st1[i];
    }
}
