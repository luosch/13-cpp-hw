#include "Account.h"
#include "AccountManager.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
 
int main() {
  string *name;  // name pointer
  int count;  // the number of accounts;
  int *balance;  // balance pointer
  AccountManager am;  // account manager
 
  am.caculateInterest();  // no accounts
  cout << endl;
 
  cin >> count;
  name = new string[count];
  balance = new int[count / 2];
 
  for (int i = 0; i < count; i++) {
    cin >> name[i];
  }
  // half of them construct with balance;
  for (int i = 0; i < count/2; i++) {
    cin >> balance[i];
    am.createAccount(name[i], balance[i]);
  }
  // the others construct without balance;
  for (int i = count / 2; i < count; i++) {
    am.createAccount(name[i]);
  }
  // finish create account;
 
  if (am.getAccount(5) == NULL) {
    cout << "Error operation!" << endl;
  } else {
    cout << "else" << endl;
    Account* temp = am.getAccount(5);
    cout << temp->getName() << endl;
    cout << temp->getBalance() << endl;
    temp->deposit(100);
    temp->deposit(-5);
    temp->withdraw(-5);
    if (temp->withdraw(200)) {
      cout << "TRUE" << endl;
    } else {
      cout << "FALSE" << endl;
    }
  }
  cout << "here" << endl;
  am.caculateInterest();
  cout << Account::getCount() << endl;
  // output all logs.
  for (int i = 0; i < Account::getCount(); i++) {
    cout << am.getAccount(i)->getName() << endl;
  }
   
  delete []name;
  delete []balance;
  cout << "here" << endl;
  while(1);
  return 0;
}
