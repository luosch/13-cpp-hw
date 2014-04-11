#ifndef _ACCOUNTMANAGER_H_
#define _ACCOUNTMANAGER_H_
 
#include "Account.h"
#include <iostream>
using std::string;
 
class AccountManager {
 public:
  AccountManager();
  ~AccountManager();
  void open(const string& name, double balance);  // 参数依次为账户名、账户余额
 
  // if the name is not existed, please output "no such account"
  void close(const string& name);  // 通过账户名来关闭账户
  int getAccountNumber();  // 获取当前已经开设的账户总数
 
 private:
  Account *head_;
};
 
#endif  // _ACCOUNTMANAGER_H_

