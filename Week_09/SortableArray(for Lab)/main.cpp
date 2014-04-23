#include <iostream>
#include "array.h"
 
using std::cin;
using std::cout;
 
int main() {
    int maxSize;
    cin >> maxSize;
 
    SortableArray<int> arr(maxSize);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.pushBack(tmp);
    }
    arr.printArray();
    arr.sort();
    arr.printArray();
    return 0;
}