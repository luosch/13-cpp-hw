#include "AccountManager.h"
#include <iostream>
using std::cout;
using std::endl;
AccountManager::AccountManager() {
	head_ = 0;
}    
AccountManager::~AccountManager() {
	while (head_) {
		Account *tmp = head_;
		head_ = head_->getNext();
		delete tmp;
	}
}    
void AccountManager::open(const string& n, double bal) {
    if (!head_) {
        head_ = new Account(n, bal);
	} else {
		Account *t = head_;
		while (t->getNext()) t = t->getNext();
		Account *tmp = new Account(n, bal);
		t->setNext(tmp);
 	}
}    
void AccountManager::close(const string& n) {
    bool find = 0;
    Account *pre = head_;
    if (head_->getName() == n) {
    	head_ = pre->getNext();
    	delete pre;
    	return;
    }
    for (Account *i = head_->getNext(); i; i = i->getNext()) {
        if (i->getName() == n) {
            find = 1;
            pre->setNext(i->getNext());
            delete i;
        	break;
        }
        pre = i;
    }
    if (!find) cout << "no such account" << endl;
}    
int AccountManager::getAccountNumber() {
	int ans = 0;
	Account *a = head_;
	if (!a) return ans;
	while (a) {
		ans++;
		a = a->getNext();
 	}
 	return ans;
}    

