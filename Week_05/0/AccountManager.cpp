#include "AccountManager.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
double AccountManager::interest_rate_ = 0.05;
void AccountManager::createAccount(const string& name) {
    if (Account::getCount() < 10) {
        int p = Account::getCount();
        for (int i = p; i < 10; i++) accounts_[i] = NULL;
        accounts_[p] = new Account(name);
    }
}
void AccountManager::createAccount(const string& name, int balance) {
    if (Account::getCount() < 10) {
        int p = Account::getCount();
        for (int i = p; i < 10; i++) accounts_[i] = NULL;
        accounts_[p] = new Account(name, balance);
    }
}
void AccountManager::caculateInterest() {
    if (Account::getCount() == 0) {
        cout << "Not any account!" << endl;
    } else {
        for (int i = 0; i < Account::getCount(); i++) {
            int tmp = accounts_[i]->getBalance()*0.05;
            accounts_[i]->deposit(tmp);
        }
    }
}
Account* AccountManager::getAccount(int pos) {
    if (pos < 0 || pos >= Account::getCount()) {
        cout << "Error operation!" << endl;
        return NULL;
    } else {
        return accounts_[pos];
    }
}
AccountManager::~AccountManager() {
    for (int i = 0; i < 10; i++) {
        delete accounts_[i];
    }
}
