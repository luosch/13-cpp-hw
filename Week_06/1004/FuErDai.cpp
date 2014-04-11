#include "FuErDai.h"
FuErDai::FuErDai(): Account() {
	name_ = "";
}    
FuErDai::FuErDai(const string& n, const string& dadName, double bal)
:Account(dadName, bal) {
	name_ = n;
}    
string FuErDai::getName() const {
	return name_;
}    
double FuErDai::getBalance() const {
	return Account::getBalance();
}    
void FuErDai::setName(string n) {
    name_ = n;
}    
void FuErDai::setBalance(double bal) {
	Account::setBalance(bal);
}

