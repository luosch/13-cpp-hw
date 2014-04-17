// Copyright 2014 lsich.com
#include "VIPAccount.h"
#include <string>
#include <cstdio>
using std::string;
int VIPAccount::_total_vip_account = 0;
int VIPAccount::_acc_id_ptr = 0;
VIPAccount::VIPAccount() {
    _valid = 1;
    _id = 12050000 + _acc_id_ptr++;
    _balance = 10;
    _loan_limit = 1000;
    _total_vip_account++;
    _loan = 0;
}
VIPAccount::~VIPAccount() {
    _total_vip_account--;
}
bool VIPAccount::loan(const double &n1n) {
    if (n1n > 0 && _loan + n1n <= _loan_limit) {
        _loan += n1n;
        _balance += n1n;
        return 1;
    } else {
        return 0;
    }
}
bool VIPAccount::repay(const double &n1n) {
    if (n1n < 0 || _balance - n1n < 0.01) return 0;
    if (n1n > _loan) {
        _balance -= _loan;
        _loan = 0;
        return 1;
    } else {
        _balance -= n1n;
        _loan -= n1n;
        return 1;
    }
}
string VIPAccount::profile() const {
    char aaa[100];
    string ress = Account::profile();
    ress += "TYPE:VIP\n";
    snprintf(aaa, sizeof(aaa), "%.6lf", _loan);
    ress += "LOAN:" + string(aaa);
    snprintf(aaa, sizeof(aaa), "%.6lf", _loan_limit);
    ress += ",LIMIT:"+ string(aaa) + "\n";
    return ress;
}
void VIPAccount::reset() {
    _balance = 0;
    _loan = 0;
    _loan_limit = 1000;
}
void VIPAccount::settlement() {
    if (_balance > 0)_balance*=1.02;
    _balance-=10;
    _loan*=1.1;
    if (_balance < 0) {
        _valid = 0;
    } else {
        _valid = 1;
    }
    if (_loan >= _loan_limit || _balance < 0.01) {
        _loan_limit*=0.95;
        _valid = 0;
    } else {
        _loan_limit*=1.01;
        _valid = 1;
    }
}
int VIPAccount::get_total_vip_account() {
    return _total_vip_account;
}
