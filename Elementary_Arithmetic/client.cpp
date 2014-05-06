// Copyright 2014 lsich
#include <iostream>
#include "MidToLast.h"
int main() {
    MidToLast instance;
    cin >> instance;
    instance.transfer();
    instance.calculate();
    cout << "Answer " << ": " << instance << endl;
  return 0;
}
