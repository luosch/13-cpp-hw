#include <iostream>
using std::cout;
using std::endl;
class Base {
 public:
    void print1() {
        cout << "BASE::Print1" << endl;
    }
    virtual void print2() {
        cout << "BASE::Print2" << endl;
    }
};

class Derive: public Base {
 public:
    void print1() {
        cout << "DERIVE::Print1" << endl;
    }
    virtual void print2() {
        cout << "DERIVE::Print2" << endl;
    }
};
int main() {
    Base * base = new Derive;
    base->print1();
    base->print2();
    base->Base::print1();
    base->Base::print2();
}