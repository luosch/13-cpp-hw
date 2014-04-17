// Copyright 2014 lsich.com
#include "Bank.h"
void Bank::do_settlement() {
    int wage = 1;
    for (int i = 0; i < _list.size(); i++) {
        _list[i]->settlement();
    }
}
void Bank::insert(Account* g) {
    _list.push_back(g);
}
