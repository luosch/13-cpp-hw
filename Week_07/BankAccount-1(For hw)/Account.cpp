#include "Account.h"
#include <cstdio>
#include <string>
using std::string;
int Account::_total_account = 0;
Account::Account() {
	_id = 0;
	_balance = 0;
	_valid = 0;
	_total_account++;
}    
Account::~Account() {
	_total_account--;
}    
int Account::id() const {return _id;}    
double Account::balance() const {return _balance;}
bool Account::valid() const {return _valid;}
std::string Account::profile() const {
    char res[40];
    snprintf(res, sizeof(res), "ID:%d\nBALANCE:%.6lf\nVALID:N\n", _id, _balance);
    return res;
}    
void Account::reset() {
    _balance = 0;
    _valid = 0;
}    
bool Account::deposit(const double &n1n) {
    if (n1n < 0) {
        return 0;
	} else {
	   	_balance+=n1n;
		return 1; 
    }    
}    
bool Account::draw(const double &n1n) {
    if (n1n < 0 || _balance-n1n < 0.01 ) {
        return 0;
	} else {
	   	_balance-=n1n;
		return 1; 
    }
}    
int Account::get_total_account() {
	return _total_account;
}
