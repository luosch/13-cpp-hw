#include <iostream>
using std::cout;
using std::endl;
class E {
  public:
    E() {
        cout << "In E()" << endl;
    }
    ~E() {
        cout << "In ~E()" << endl;
    }    
};
class C {
  public:
    C() {
        cout << "In C()" << endl;
    }
    ~C() {
        cout << "In ~C()" << endl;
    }   
};
class D: public E {
  public:
    D():E() {
        cout << "In D()" << endl;
    }
    ~D() {
        cout << "In ~D()" << endl;
    }
  private:
    C tmp;
};

class A: public C {
  public:
    A(): C() {
        cout << "In A()" << endl;
    }
    ~A() {
        cout << "In ~A()" << endl;
    }
};
class B: public D {
  public:
    B(): D() {
        cout << "In B()" << endl;
    }
    ~B() {
        cout << "In ~B()" << endl;
    }
  private:
    A tmp;   
};

