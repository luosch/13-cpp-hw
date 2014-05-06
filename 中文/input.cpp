#include <iostream>
using namespace std;
class Sample {
 public:
    int v;
    Sample() {}
    Sample(int n) :v(n) { };
    Sample(const Sample &x) {
        cout << "copy" << x.v << endl;
        v = 2 + x.v;
    }
};
Sample PrintAndDouble(Sample o) {
    cout << o.v << endl;
    o.v = 2 * o.v;
    return o;
}
int main() {
    Sample a(5);//a.v = 5;
    Sample b = a;//b.v = 5 + 2;
    Sample c = PrintAndDouble(b);//firstly, cout<< o.v + 2= 9; o.v = 18; return o.v + 2 = 20; c = 20; 
    cout << endl;
    cout << c.v << endl;//20。。。。。22？Sample c = 时候调用拷贝构造？
    //cout << hex << c.v << endl;
    Sample d;
    d = a;
    cout << d.v;//5
    return 0;
}