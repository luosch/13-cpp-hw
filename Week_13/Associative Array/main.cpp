#include <iostream>
#include "Array.h"
 
using namespace std;
 
int main() {
    int tmp[4];
    Array arr;
    for (int i = 0; i < 4; i++) {
        cin >> tmp[i];
    }
    arr[1] = tmp[0];
    arr["one"] = tmp[1];
    arr[2] = tmp[2];
    arr["two"] = tmp[3];
    cout << arr[1] << endl;
    cout << arr["one"] << endl;
    cout << arr[2] << endl;
    cout << arr["two"] << endl;
    cout << arr[3] << endl;
    cout << arr["three"] << endl;
    return 0;
}