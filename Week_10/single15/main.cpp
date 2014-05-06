#include <iostream>
using std::cout;
using std::endl;
class Geo {
 public:
    virtual void fg() {cout << "Geo" << endl;}
    bool operator<(Geo b) {
        return this->elem < b.elem; 
    }
    int elem;
};
int main() {
    Geo a, b;
    a.elem = 1;
    b.elem = 2;
    cout << (a<b) << endl;
}
