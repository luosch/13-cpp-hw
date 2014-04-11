#include "BankAccount.h"
void BankAccount::reset() {
    balance = 0;
    name = "NONAME";
}
void BankAccount::setBalance(int newBalance) {
    if (newBalance < 0) balance = 0;
    else if (newBalance > 200000) balance = 200000;
    else balance = newBalance;
}
void BankAccount::setName(std::string newName) {
    if (newName == "") name = "INVALID";
    else name = newName;
}
int BankAccount::getBalance() const {
    return balance;
}
std::string BankAccount::getName() const {
    return name;
}
