// Copyright 2014 lsich.com
#ifndef MY_STACK_H
#define MY_STACK_H
#include <cstdio>
template<typename T>
class Stack {
 public:
    struct node;
    struct node {
        T data;
        node* next;
        node(const T& _data, node* _next) {
            data = _data;
            next = _next;
        }
    };
    Stack() {
        _top = 0;
        _size = 0;
    }
    ~Stack() {
        while (!empty()) pop();
    }
    void push(T lsc) {
        node *tmp = new node(lsc, _top);
        _top = tmp;
        _size++;
    }
    void pop() {
        if (!empty()) {
            node *tmp = _top;
            _top = _top->next;
            delete tmp;
            _size--;
        }
    }
    T& top() {return _top->data;}
    bool empty() {return !_size;}
    size_t size() {return _size;}

 private:
    node* _top;
    size_t _size;
};

#endif

