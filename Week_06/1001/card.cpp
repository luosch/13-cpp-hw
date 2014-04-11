#include "card.h"
#include "queue.h"
#include <iostream>
using std::cout;
using std::endl;
void Card::printCard(int nxn) {
    Queue cc;
    for(int i=1;i<=nxn;i++) cc.push(i);
    while(cc.getSize()>=2) {
        cout << cc.getFront() << " ";
        cc.pop();
        cc.push(cc.getFront());
        cc.pop();
    }
    cout << cc.getFront() << endl;
    cc.pop();
}    

