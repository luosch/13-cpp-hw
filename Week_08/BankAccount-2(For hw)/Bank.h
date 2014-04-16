#ifndef SSCPP2014_BANK_H
#define SSCPP2014_BANK_H
 
#include "PersonalAccount.h"
#include "VIPAccount.h"
 
#include <vector>
 
class Bank {
  private:
    std::vector<Account*> _list;
  public:
    void do_settlement();
    void insert(Account* g);
};
 
#endif
