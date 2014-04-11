#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
 
#include <iostream>
using std::string;
 
class Account {
 public:
  Account();
  Account(const string& name, double balance);
  string getName() const;
  double getBalance() const;
  Account* getNext() const;
  void setName(const string& name);
  void setBalance(double balance);
  void setNext(Account* next);
 
 private:
  string name_;
  double balance_;
  Account *next_;  // 链式结构，指向下一个Account
};
 
#endif  // _ACCOUNT_H_
