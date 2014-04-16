// Copyright 2014 lsich.com
#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "PersonalAccount.h"
#include "VIPAccount.h"
using namespace std;
 
void display_count() {
  cout << Account::get_total_account() << ",";
  cout << PersonalAccount::get_total_per_account() << ",";
  cout << VIPAccount::get_total_vip_account() << endl;
}
 
int main() {
  display_count();
  if (true) {
    Account a0, a1, a2;
    display_count();
    PersonalAccount b0, b1;
    display_count();
  }
  Bank icbc;
  VIPAccount c0, c1, c2, c3;
  icbc.insert(&c0);
  display_count();
 
  Account *bptr = new Account();
  cout << bptr->profile() << endl;
  cout << bptr->id() << bptr->balance() << bptr->valid() << endl;
  delete bptr;
 
  bptr = new PersonalAccount();
  icbc.insert(bptr);
  cout << bptr->profile() << endl;
  for (int i = 0; i < 5; ++i) {
    double t;
    int op;
    cin >> op >> t;
    if (op < 5) {
      cout << bptr->deposit(t) << ", ";
    } else {
      cout << bptr->draw(t) << ", ";
    }
    icbc.do_settlement();
    cout << bptr->balance() << endl;
  }
  icbc.do_settlement();
  cout << bptr->profile() << endl;
  bptr->reset();
  cout << bptr->profile() << endl;
  Account *up = bptr;
 
  VIPAccount *vptr = new VIPAccount();
  bptr = vptr;
  icbc.insert(vptr);
  cout << bptr->profile() << endl;
  icbc.do_settlement();
  for (int i = 0; i < 5; ++i) {
    double t;
    int op;
    cin >> op >> t;
    if (op < 5) {
      cout << vptr->loan(t);
    } else {
      cout << vptr->repay(t);
    }
    icbc.do_settlement();
    cout << "\n" << bptr->profile() << endl;
  }
  bptr->reset();
  cout << bptr->profile() << endl;
  delete bptr;
  delete up;
  return 0;
}
