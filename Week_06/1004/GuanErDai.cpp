#include "GuanErDai.h"
GuanErDai::GuanErDai(): Account() {
	name_ = "";
}    
GuanErDai::GuanErDai(const string& n, const string& dadName, double bal)
:Account(dadName, bal) {
	name_ = n;
}    
string GuanErDai::getName() const {
	return name_;
}    
double GuanErDai::getBalance() const {
	return Account::getBalance();
}    
void GuanErDai::setName(string n) {
    name_ = n;
}    
void GuanErDai::setBalance(double bal) {
	Account::setBalance(bal);
}

