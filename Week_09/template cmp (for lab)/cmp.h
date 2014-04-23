// Copyright 2014 www.lsich.com
#ifndef CMP_H
#define CMP_H
#include <cstring>
template<typename TTT>
bool cmp(TTT p1, TTT p2) {
    return p1 == p2;
}
bool cmp(char* p1, char * p2) {
    if (strcmp(p1, p2) == 0) return 1;
    return 0;
}
bool cmp(int* p1, int* p2) {
    return *p1 == *p2;
}
#endif
