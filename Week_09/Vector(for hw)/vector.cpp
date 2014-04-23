// Copyright 2014 www.lsich.com
#include "vector.h"
template<typename lsc>
Vector<lsc>::Vector(int sssss) {
    maxSize = sssss;
    _size = 0;
    data = new lsc[sssss];
}
template<typename lsc>
Vector<lsc>::~Vector() {
    delete []data;
}
template<typename lsc>int Vector<lsc>::size() const {return _size;}
template<typename lsc>bool Vector<lsc>::empty() const {return !_size;}
template<typename T>
void Vector<T>::push_back(T e1e) {
    if (_size >= maxSize) {
        int tmp_maxSize = this->maxSize;
        int tmp_data[1000];
        for (int i = 0; i < maxSize; i++) tmp_data[i] = this->data[i];
        maxSize*=2;
        delete []data;
        data = new T[maxSize];
        for (int i = 0; i < tmp_maxSize; i++) this->data[i] = tmp_data[i];
    } else {
        this->data[_size++] = e1e;
    }
}
template<typename T>
void Vector<T>::pop_back() {_size--;}
template<typename T>
Vector<T>& Vector<T>::operator =(const Vector<T>& v) {
    Vector<T> res(v.maxSize);
    res._size = v._size;
    for (int i = 0; i < v._size; i++) {
        *(res.data+i) = *(v.data+i);
    }
    return res;
}
template<typename T>
Vector<T>::Vector(const Vector<T>& v) {
    *this = v;
}
template<typename sT>
ostream& operator << (ostream &out, const Vector<sT> &v) {
    for (int i = 0; i < v._size-1; i++) {
        out << v.data[i] << " ";
    }
    out << v.data[v._size-1];
    return out;
}
template<typename T>
T& Vector<T>::operator[](int indexx) {return this->data[indexx];}
