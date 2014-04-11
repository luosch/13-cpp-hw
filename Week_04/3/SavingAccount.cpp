#include "SavingsAccount.h"
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
// avoid cheating lsc
double SavingsAccount::annualInterestRate = 0.03;
void SavingsAccount::calculateMonthlyInterest() {
    savingsBalance *= (1+annualInterestRate/12.0);
}    
void SavingsAccount::modifyInterestRate(double newRate) {
    annualInterestRate = newRate;
}
