#include <iostream> 
using namespace std;
int main () {
    int *a = new int[0];
    a[0] = 1;
    cout << *a << endl;
    return 0;
}
