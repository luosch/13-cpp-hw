#ifndef VECTOR_H
#define VECTOR_H
 
#define SIZE 1
#include <iostream>
using std::ostream;
 
template<typename T>
class Vector {
    public:
        template <typename sT>
        friend ostream& operator << (ostream &out, const Vector<sT> &v);
        explicit Vector(int s = SIZE);
        ~Vector();
        Vector(const Vector<T>& v);
        int size() const;
        bool empty() const;
        void clear();
        void push_back(T ele);
        void pop_back();
 
        T& operator[](int index);
        Vector<T>& operator =(const Vector<T>& v);
    private:
        int maxSize;
        int _size;
        T *data;
};
 
#endif