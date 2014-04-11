// Programming Challenge 1: AccountTest.cpp
// Driver program for class SavingsAccount.
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
#include "SavingsAccount.h"  // SavingsAccount class definition
 
int main() {
    double a, b;
    cin >> a >> b;
    double rate1, rate2;
    cin >> rate1 >> rate2;
    SavingsAccount saver1(a);
    SavingsAccount saver2(b);
 
    SavingsAccount::modifyInterestRate(rate1);  // change interest rate
 
    cout << "Initial balances:\nSaver 1: ";
    saver1.printBalance();
    cout << "\tSaver 2: ";
    saver2.printBalance();
 
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
 
    cout << "\n\nBalances after 1 month's interest applied at ";
    cout << rate1 << ":\n" << "Saver 1: ";
    saver1.printBalance();
    cout << "\tSaver 2: ";
    saver2.printBalance();
 
    SavingsAccount::modifyInterestRate(rate2);  // change interest rate
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
 
    cout << "\n\nBalances after 1 month's interest applied at ";
    cout << rate2 << ":\n" << "Saver 1: ";
    saver1.printBalance();
    cout << "\tSaver 2: ";
    saver2.printBalance();
    cout << endl;
    while(1);
}  // end main
