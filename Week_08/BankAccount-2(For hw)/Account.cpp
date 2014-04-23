// Copyright 2014 lsich.com
#include "Account.h"
#include <string>
#include <cstdio>
using std::string;
int Account::_total_account = 0;
Account::Account() {
    _valid = 0;
    _balance = _id = 0;
    _total_account++;
}
Account::~Account() {
    _total_account--;
}
int Account::id() const {
    return _id;
}
double Account::balance() const {
    return _balance;
}
bool Account::valid() const {
    return _valid;
}
string Account::profile() const {
    string ress;
    char aaa[100];
    snprintf(aaa, sizeof(aaa), "%d", _id);
    ress += "ID:" + string(aaa) + "\n";
    snprintf(aaa, sizeof(aaa), "%.6lf", _balance);
    ress += "BALANCE:" + string(aaa) + "\n";
    ress += "VALID:" + string(valid() ? "Y" : "N") + "\n";
    return ress;
}
void Account::reset() {
    _balance = 0;
}
void Account::settlement() {
    _balance*=1.02;
}
bool Account::deposit(const double &num) {
    if (num >= 0) {
        _balance += num;
        return 1;
    } else {
        return false;
    }
}
bool Account::draw(const double &num) {
    if (num >= 0 && _balance - num >= 0.01) {
        _balance -= num;
        return 1;
    } else {
        return 0;
    }
}
int Account::get_total_account() {
    return _total_account;
}

