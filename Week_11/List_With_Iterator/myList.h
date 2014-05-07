// Copyright 2014 lsich
#ifndef MYLIST_H
#define MYLIST_H
#include <ostream>
using std::ostream;
template<typename T>
class list {
 public:
    struct listelem;
    class iterator;
    list() {
        _head.ptr = _tail.ptr = 0;
        _size = 0;
    }
    list(size_t lsich, const T& lsc) {
        for (size_t i = 0; i < lsich; i++) push_back(lsc);
    }
    list(const list& lsc) {
        iterator it;
        for (it = lsc.begin(); it != lsc.end(); it++) {
            push_back(*it);
        }
    }
    list(iterator lsc, iterator zyl) {
        iterator it;
        for (it = lsc; it != zyl; it++) {
            this->push_back(*it);
        }
    }
    void push_front(const T& lsc) {
        if (!_head.ptr && !_tail.ptr) {
            listelem *tmp = new listelem(lsc, 0, 0);
            _head.ptr = _tail.ptr = tmp;
            _size = 1;
        } else {
            listelem *tmp = new listelem(lsc, _head.ptr, 0);
            _head->prev = tmp;
            _head.ptr = tmp;
            _size++;
        }
    }
    void push_back(const T& lsc) {
        if (!_head.ptr && !_tail.ptr) {
            listelem *tmp = new listelem(lsc, 0, 0);
            _head.ptr = _tail.ptr = tmp;
            _size = 1;
        } else {
            listelem *tmp = new listelem(lsc, 0, _tail.ptr);
            _tail->next = tmp;
            _tail.ptr = tmp;
            _size++;
        }
    }
    void pop_front() {
        if (size() == 1) {
            delete _head.ptr;
            _head.ptr = _tail.ptr = 0;
            _size--;
            return;
        }
        if (!empty()) {
            listelem *tmp = _head.ptr;
            _head.ptr = tmp->next;
            _head.ptr->prev = 0;
            delete tmp;
            _size--;
        }
    }
    void pop_back() {
        if (size() == 1) {
            delete _tail.ptr;
            _head.ptr = _tail.ptr = 0;
            _size--;
            return;
        }
        if (!empty()) {
            listelem *tmp = _tail.ptr;
            _tail.ptr = tmp->prev;
            _tail.ptr->next = 0;
            delete tmp;
            _size--;
            return;
        }
    }
    iterator insert(iterator poss, const T& lsc) {
        if (poss == end()) {
            push_back(lsc);
            iterator tmp = _tail;
            return tmp;
        }
        listelem *tmp = new listelem(lsc, poss.ptr, poss.ptr->prev);
        if (poss.ptr->prev) {
            poss.ptr->prev->next = tmp;
        } else {
            _head.ptr = tmp;
        }
        poss.ptr->prev = tmp;
        _size++;
        return iterator(tmp);
    }
    iterator erase(iterator poss) {
        listelem *tmp = poss.ptr;
        poss++;
        tmp->prev->next = tmp->next;
        tmp->next->prev = tmp->prev;
        delete tmp;
        _size--;
        return poss;
    }
    bool empty() const {
        return _head.ptr == 0 && _tail.ptr == 0;
    }
    T& front() {return *_head;}
    T& back() {return *(this->_tail);}
    void clear() {
        while (!empty()) {
            pop_back();
        }
        _head.ptr = _tail.ptr = 0;
    }
    struct listelem {
        T data;
        listelem *next, *prev;
        listelem(const T& gs70g, listelem* lsc, listelem* zyl) {
            next = lsc;
            prev = zyl;
            data = gs70g;
        }
    };
    iterator begin() const {return _head;}
    iterator end() const {return iterator();}
    ~list() {clear();}
    size_t size() {return _size;}
    friend ostream& operator <<(ostream& out, const list& lsc) {
        if (lsc.empty()) {
            out << "[ ]";
        } else {
            iterator it;
            out << "[ ";
            for (it = lsc.begin(); it != lsc.end(); ++it) {
                out << *it << ' ';
            }
            out << "]";
        }
        return out;
    }
    class iterator {
     public:
        friend class list;
        explicit iterator(listelem* p = 0) {
            ptr = p;
        }
        iterator(const iterator& o) {
            ptr = o.ptr;
        }
        iterator& operator ++() {
            ptr = ptr->next;
            return *this;
        }
        iterator& operator --() {
            ptr = ptr->prev;
            return *this;
        }
        iterator operator ++(int a70f) {
            iterator tmp(*this);
            ++(*this);
            return tmp;
        }
        iterator operator --(int b72b) {
            iterator tmp(*this);
            --(*this);
            return tmp;
        }
        bool operator ==(const iterator& oo) {
            return this->ptr == oo.ptr;
        }
        bool operator !=(const iterator& oo) {
            return !((*this) == oo);
        }
        T& operator *() {return ptr->data;}
        listelem* operator ->() {return ptr;}
        operator listelem*() {return ptr;}
        friend ostream& operator <<(ostream& out, const iterator& x) {
            out << x.ptr;
            return out;
        }

     private:
        listelem* ptr;
    };

 private:
    size_t _size;
    iterator _head, _tail;
};

#endif
