// Programming Challenge 1: SavingsAccount.h
// Header file for class SavingsAccount.
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
 
#include <iostream>
#include <iomanip>
 
class SavingsAccount {
    public:
        // constructor sets balance to value greater than or equal to zero
        explicit SavingsAccount(double b) {
                savingsBalance = (b >= 0.0 ? b : 0.0);
        }  // end SavingsAccount constructor
 
        void calculateMonthlyInterest();  // calculate interest; add to balance
        static void modifyInterestRate(double newRate);
        // prints balance of the savings account
        void printBalance() const {
               std::cout << std::fixed << '$' << std::setprecision(2);
               std::cout << savingsBalance;
        }  // end function printBalance
    private:
        double savingsBalance;  // the account balance
        static double annualInterestRate;  // the interest rate of all accounts
};  // end class SavingsAccount
 
#endif

