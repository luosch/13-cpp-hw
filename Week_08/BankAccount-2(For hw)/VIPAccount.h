#ifndef SSCPP2014_VIP_ACCOUNT_H
#define SSCPP2014_VIP_ACCOUNT_H
 
#include "Account.h"
 
class VIPAccount : public Account {
  private:
    static int _total_vip_account;
    static int _acc_id_ptr;
  protected:
    double _loan;
    double _loan_limit;  // initial as 1k
  public:
    VIPAccount();
    virtual ~VIPAccount();
    bool loan(const double &num);
    bool repay(const double &num);
    // override
    virtual std::string profile() const;
    virtual void settlement();
    virtual void reset();
    // static
    static int get_total_vip_account();
};
 
#endif
