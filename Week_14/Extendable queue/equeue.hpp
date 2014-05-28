// Copyright (c) lsich.com
#include "equeue.h"
#include <iostream>
#define error -1
#define max 1024
using std::endl;
using std::cout;
template <class T>
Queue<T>::Queue() {
    count_ = size_ = ptrf_ = ptrb_ = 0;
    MemBlock<T> *tmp = new MemBlock<T>;
    frontBlock_ = backBlock_ = tmp;
    frontBlock_->prev = backBlock_->prev = NULL;
    frontBlock_->next = backBlock_->next = NULL;
}
template <class T>
Queue<T>::~Queue() {
    MemBlock<T> *tmp = frontBlock_;
    while (tmp) {
        tmp = tmp->next;
        delete frontBlock_;
        frontBlock_ = tmp;
    }
}
template <class T>
bool Queue<T>::empty() const {return !size();}
template <class T>
int Queue<T>::size() const {return size_;}
template <class T>
T Queue<T>::front() const {
    if (frontBlock_) {
        return frontBlock_->dat[ptrf_];
    } else {
        return error;
    }
}
template <class T>
void Queue<T>::push(const T& __input) {
    if (ptrb_ < max) {
        backBlock_->dat[ptrb_++] = __input;
    } else {
        ptrb_ = 0;
        this->appendBlock();
        backBlock_->dat[ptrb_++] = __input;
    }
    ++size_;
}
template <class T>
T Queue<T>::pop() {
    T ans;
    if (empty()) return error;
    --size_;
    if (ptrf_ < max) {
        ans = frontBlock_->dat[ptrf_];
    } else {
        ptrf_ = 0;
        ans = frontBlock_->dat[ptrf_];
        frontBlock_ = frontBlock_->next;
    }
    ++ptrf_;
    return ans;
}
template <class T>
void Queue<T>::appendBlock() {
    MemBlock<T> *tmp = new MemBlock<T>;
    tmp->next = 0;
    backBlock_->next = tmp;
    tmp->prev = backBlock_;
    backBlock_ = tmp;
}
template <class T>
void Queue<T>::clear() {
    MemBlock<T> *tmp = frontBlock_;
    while (tmp) {
        tmp = tmp->next;
        delete frontBlock_;
        frontBlock_ = tmp;
    }
    count_ = size_ = ptrf_ = ptrb_ = 0;
    tmp = new MemBlock<T>;
    frontBlock_ = backBlock_ = tmp;
    frontBlock_->prev = backBlock_->prev = NULL;
    frontBlock_->next = backBlock_->next = NULL;
}
template <class T>
void Queue<T>::reduceBlock() { }
template <class T>
void Queue<T>::reset() { }

template struct MemBlock<int>;
template struct MemBlock<double>;
template class Queue<int>;
template class Queue<double>;
