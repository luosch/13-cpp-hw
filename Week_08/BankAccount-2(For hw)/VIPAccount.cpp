// Copyright 2014 lsich.com
#include "VIPAccount.h"
#include <string>
#include <cstdio>
using std::string;
const int base = 12050000;
int VIPAccount::_total_vip_account = 0;
int VIPAccount::_acc_id_ptr = -1;
VIPAccount::VIPAccount() {
	Account();
    deposit(10);
    _loan_limit = 1000;
    _loan = 0;
    _acc_id_ptr++;
    _total_vip_account++;
}
VIPAccount::~VIPAccount() {
	_total_vip_account--;
}
void VIPAccount::settlement() {
    
}
bool VIPAccount::loan(const double &n1n) {
	if (_loan <= _loan_limit && n1n >= 0) {
		_loan+=n1n;
		_balance+=n1n;
		_loan_limit-=n1n;
		return 1;
	} else {
		return 0;
	}
}
bool VIPAccount::repay(const double &n1n) {
	if (n1n <= _loan && n1n >= 0) {
		_loan-=n1n;
		_balance-=n1n;
		_loan_limit+=n1n;
	} else {
		return 0;
	}
}
std::string VIPAccount::profile() const {
	char res[80];
	snprintf(res, sizeof(res), "ID:%d\nBALANCE:%.6lf\nVALID:Y\nTYPE:VIP\nLOAN:%.6lf,LIMIT:%.6lf\n",
	 _acc_id_ptr+base, _balance, _loan, _loan_limit);
	return res;
}
void VIPAccount::reset() {
	_loan = _balance = 0;
	_loan_limit = 1000;
}
int VIPAccount::get_total_vip_account() {return _total_vip_account;}

