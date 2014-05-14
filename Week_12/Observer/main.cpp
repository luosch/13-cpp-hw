#include <iostream>
#include <vector>
#include "Observer.h"
 
int main() {
    ObserverA a;
    ObserverB b;
    ObserverA aa;
 
    Subject subject;
    subject.registerObserver(&a);
    subject.registerObserver(&b);
    cout << "Notify All:" << endl;
    subject.notifyObserver();
    subject.registerObserver(&aa);
    cout << "Notify All:" << endl;
    subject.notifyObserver();
 
    ObserverB bb;
    subject.registerObserver(&bb);
    subject.unregisterObserver(&a);
    cout << "Notify All:" << endl;
    subject.notifyObserver();
 
    subject.unregisterObserver(&b);
    subject.unregisterObserver(&aa);
    cout << "Notify All:" << endl;
    subject.notifyObserver();
 
    ObserverA aaa;
    ObserverB bbb;
    ObserverA aaaa;
    subject.registerObserver(&aaa);
    subject.registerObserver(&bbb);
    subject.registerObserver(&aaaa);
    subject.unregisterObserver(&bbb);
    cout << "Notify All:" << endl;
    subject.notifyObserver();
 
    return 0;
}