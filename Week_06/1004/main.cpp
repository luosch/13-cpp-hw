#include "Account.h"
#include "AccountManager.h"
#include "FuErDai.h"
#include "GayFoolShy.h"
#include "GuanErDai.h"
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
 
int main1() {
  string n1, n2, n3, n4;
  double d1, d2, d3;
  cin >> n1 >> d1;
  Account a(n1, d1);
  cin >> n2 >> d2;
  FuErDai f(n2, n1, d2);
  cin >> n3 >> d3;
  GuanErDai g(n3, n1, d3);
  cin >> n4;
  GayFoolShy s(n4, n2, d2, n3, d3);
 
  cout << "Test Account" << endl;
  cout << a.getName() << " " << a.getBalance() << endl;
  a.setName("a");
  a.setBalance(2.5);
  cout << a.getName() << " " << a.getBalance() << endl;
  cout << endl;
 
  cout << "Test FuErDai" << endl;
  cout << f.getName() << " " << f.getBalance() << endl;
  f.setName("f");
  f.setBalance(22.5);
  cout << f.getName() << " " << f.getBalance() << endl;
  cout << endl;
 
  cout << "Test GuanErDai" << endl;
  cout << g.getName() << ""  << g.getBalance() <<  endl;
  f.setName("g");
  f.setBalance(55.55);
  cout << f.getName() << " " << f.getBalance() << endl;
  cout << endl;
 
  cout << "Test GayFoolShy" << endl;
  cout << s.getName() << " " << s.getBalance() << endl;
  cout << endl;
 
  AccountManager am;
  cout << "Test GayFoolShy" << endl;
  cout << am.getAccountNumber() << endl;
  am.open("a", 1);
  am.open("b", 1);
  am.open("c", 1);
  am.open("d", 1);
  am.open("e", 1);
  am.open("f", 1);
  am.open("g", 1);
  cout << am.getAccountNumber() << endl;
  am.close("g");
  cout << am.getAccountNumber() << endl;
  am.close("a");
  cout << am.getAccountNumber() << endl;
  am.close("c");
  cout << am.getAccountNumber() << endl;
  am.close("h");
  cout << am.getAccountNumber() << endl;
  return 0;
}
int main() {
	main1();
	cout << "success" << endl;
	while(1);
	return 0;
}    

