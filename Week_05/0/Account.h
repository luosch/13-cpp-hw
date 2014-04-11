#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
 
#include <iostream>
#include <string>
using std::string;
 
class Account {
 public:
  static int getCount();
  explicit Account(const string& name);
  Account(const string& name, int balance);
  ~Account();
  void deposit(int amount);
  bool withdraw(int amount);
 
  // inline function
  inline const string& getName() const {
    return name_;
  }
  inline int getBalance() const {
    return balance_;
  }
  inline const string& getLog() const {
    return log_;
  }
 
 private:
  string name_;
  int balance_;
  string log_;
 
  string intToStr(int target);
 
  static int count_;
};
 
#endif  // _ACCOUNT_H_
