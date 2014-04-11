#include "Account.h"
#include <iostream>
using std::cout;
using std::endl;
Account::Account() {
	name_ = "";
	balance_ = 0;
	next_ = 0;
}
Account::Account(const string& n, double bal) {
	name_ = n;
	balance_ = bal;
	next_ = 0;
}    
string Account::getName() const {
    return name_;
}    
double Account::getBalance() const {
	return balance_;
}    
Account* Account::getNext() const {
	return next_;
}    
void Account::setName(const string& n) {
	name_ = n;
}    
void Account::setBalance(double bal) {
	balance_ = bal;
}    
void Account::setNext(Account* nex) {
	next_ = nex;
}

