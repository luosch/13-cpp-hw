// Copyright 2014 lsich.com
#include "PersonalAccount.h"
#include <string>
#include <cstdio>
using std::string;
const int base = 12010000;
int PersonalAccount::_acc_id_ptr = -1;
int PersonalAccount::_total_per_account = 0;
PersonalAccount::PersonalAccount() {
    Account();
    deposit(10);
    _acc_id_ptr++;
    _total_per_account++;
}    
PersonalAccount::~PersonalAccount() {
	_total_per_account--;
}
void PersonalAccount::settlement() {
    if (_valid)
    _balance+=0.02);
    if (_)
}
std::string PersonalAccount::profile() const {
	char res[60];
	snprintf(res, sizeof(res), "ID:%d\nBALANCE:%.6lf\nVALID:Y\nTYPE:PERSONAL\n",
	_acc_id_ptr+base, _balance);
	return res;
}
int PersonalAccount::get_total_per_account() {
	return _total_per_account;
}
