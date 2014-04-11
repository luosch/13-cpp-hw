#include "Account.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
int Account::count_ = 0;
int Account::getCount() {
    return count_;
}
Account::Account(const string& name) {
    name_ = name;
    balance_ = 0;
    log_ += "Create an account " + name + "\n";
    count_++;
}
Account::Account(const string& name, int balance) {
    name_ = name;
    balance_ = balance;
    log_ += "Create an account " + name + "\n";
    count_++;
}
Account::~Account() {
    Account::count_--;
}
string Account::intToStr(int aaa) {
    string tmp1 = "";
    if (aaa == 0) return "0";
    while (aaa) {
        tmp1+=(aaa%10+'0');
        aaa/=10;
    }
    string tmp = tmp1;
    for (int i = 0; i < tmp1.length(); i++) {
        tmp[i]=tmp1[tmp1.length()-i-1];
    }
    return tmp;
}
void Account::deposit(int amount) {
    if (amount < 0) {
        cout << "Error operation!" << endl;
        log_+="Error operation!\n";
    } else {
        balance_+=amount;
        log_+= "Deposit "+intToStr(amount)+" yuan\n";
    }
}
bool Account::withdraw(int amount) {
    if (amount <= 0) {
        cout << "Error operation!" << endl;
        log_+="Error operation!\n";
        return 0;
    } else if (balance_ < amount) {
        cout << "You don't have enough money!" << endl;
        log_+="Error operation!\n";
        return 0;
    } else {
        balance_-=amount;
        log_+= "Withdraw "+intToStr(amount)+" yuan\n";
        return 1;
    }
}
