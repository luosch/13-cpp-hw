#ifndef _ACCOUNTMANAGER_H_
#define _ACCOUNTMANAGER_H_
 
#include "Account.h"
#include <iostream>
using std::string;
 
class AccountManager {
 public:
  void createAccount(const string& name);
  void createAccount(const string& name, int balance);
  void caculateInterest();
  Account* getAccount(int position);
  ~AccountManager();  // remember to delete all account pointers
 
 private:
  Account* accounts_[10];
  static double interest_rate_;  // Please set 0.05
};
 
#endif  // _ACCOUNTMANAGER_H_
