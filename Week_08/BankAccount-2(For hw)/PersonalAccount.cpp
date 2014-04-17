#include "PersonalAccount.h"
#include <cstdio>
#include <string>
using std::string;
int PersonalAccount::_acc_id_ptr = 0;
int PersonalAccount::_total_per_account = 0;
PersonalAccount::PersonalAccount() {
  _id = 12010000 + _acc_id_ptr++;
  _total_per_account++;
  _balance = 10;
  _valid = 1;
}
string PersonalAccount::profile() const {
    string ress = Account::profile();
    ress += "TYPE:PERSONAL\n";
    return ress;
}
PersonalAccount::~PersonalAccount() {
    _total_per_account--;
}
void PersonalAccount::settlement() {
    if (_balance >= 0)_balance*=1.02;
    _balance-=3;
    if (_balance < 0) {
        _valid = 0;
    } else {
        _valid = 1;
    }
}
int PersonalAccount::get_total_per_account() {
    return _total_per_account;
}

