#ifndef SORTABLE_ARRAY_H
#define SORTABLE_ARRAY_H
 
#include <iostream>
using std::cin;
using std::cout;
 
template<typename T>
class SortableArray {
    public:
        explicit SortableArray(int s);
        ~SortableArray();
        void pushBack(T a);
        void sort();
        void printArray();
    private:
        int maxSize;
        int size;
        T* array;
};
 
#endif