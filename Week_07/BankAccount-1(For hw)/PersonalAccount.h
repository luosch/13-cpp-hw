#ifndef SSCPP2014_PER_ACCOUNT_H
#define SSCPP2014_PER_ACCOUNT_H
 
#include "Account.h"
 
class PersonalAccount : public Account {
  private:
    static int _total_per_account;
    static int _acc_id_ptr;
  public:
    PersonalAccount();
    ~PersonalAccount();
    // override
    std::string profile() const;
    // static
    static int get_total_per_account();
};
 
#endif
