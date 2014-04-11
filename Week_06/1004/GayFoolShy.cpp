#include "GayFoolShy.h"
GayFoolShy::GayFoolShy(const string& name,
const string& fName, double fBalance,
const string& gName, double gBalance)
:FuErDai(name, fName, fBalance), GuanErDai(name, gName, gBalance) {
	name_ = name;
}    
string GayFoolShy::getName() const {return GayFoolShy::name_;}
double GayFoolShy::getBalance() const {
    return FuErDai::getBalance()+GuanErDai::getBalance();
}
