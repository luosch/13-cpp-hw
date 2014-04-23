// Copyright 2014 www.lsich.com
#include "array.h"
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
template<typename TT>SortableArray<TT>::SortableArray(int sxy) {
    maxSize = sxy;
    size = 0;
    array = new TT[sxy];
}
template<typename XX>void SortableArray<XX>::printArray() {
    for (int i = 0; i < size; i++) {
        if (i == size-1 ) cout << *(array+size-1) << endl;
        else
        cout << *(array+i) << " ";
    }
}
template<typename XX>void SortableArray<XX>::pushBack(XX e1e) {
    if (size == maxSize) cout << "Already full!" << endl;
    else
    array[size++] = e1e;
}
template<typename LSC>void SortableArray<LSC>::sort() {
    std::sort(array, array+size);
}
template<typename LSC>SortableArray<LSC>::~SortableArray() {
    delete []array;
}
