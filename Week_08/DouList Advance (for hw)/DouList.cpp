// Copyright 2014 lsich.com
#include "DouList.h"
#include <string>
#include <iostream>
#include <sstream>
using std::ostream;
using std::stringstream;
using std::string;
using std::cout;
using std::endl;
DouList::DouList() {
    _head = _tail = 0;
}
void DouList::clear() {
    while (_head) {
        DouListNode *tmp = _head;
        if (tmp->sublist) delete tmp->sublist;
        _head = _head->next;
        delete tmp;
    }
    _head = _tail = 0;
}
DouList::DouList(const DouList &src) {
    _head = _tail = 0;
    *this = src;
}
DouList::~DouList() {
    while (_head) {
        DouListNode *tmp = _head;
        if (tmp->sublist) delete tmp->sublist;
        _head = _head->next;
        delete tmp;
    }
}
bool DouList::empty() const {return !_head&&!_tail;}
string DouList::to_str() const {
    string res = "[", t1t;
    stringstream stream;
    if (empty()) return "[]";
    DouListNode *tmp = _head;
    if (tmp) {
        if (tmp->sublist) {
            res+=tmp->sublist->to_str();
            tmp = tmp->next;
        } else {
            stream << tmp->elem;
            stream >> t1t;
            res+=t1t;
            stream.clear();
            tmp = tmp->next;
        }
    }
    while (tmp) {
        res+=", ";
        if (tmp->sublist) {
            res+=tmp->sublist->to_str();
            tmp = tmp->next;
        } else {
            stream << tmp->elem;
            stream >> t1t;
            res+=t1t;
            stream.clear();
            tmp = tmp->next;
        }
    }
    res+="]";
    return res;
}
DouList DouList::front() const {
    DouList tmp;
    tmp.push_front(_head->elem);
    if (!_head->sublist) return tmp;
    else
    return *(_head->sublist);
}
DouList DouList::back() const {
    DouList tmp;
    tmp.push_front(_tail->elem);
    if (!_tail->sublist) return tmp;
    else
    return *(_tail->sublist);
}
void DouList::push_front(const DouListNode &e1e) {
    if (!_head && !_tail) {
        _head = new DouListNode(e1e.elem, 0, 0);
        DouList *tt;
        if (e1e.sublist) {
            tt = new DouList(*e1e.sublist);
        } else {
            tt = 0;
        }
        _head->sublist = tt;
        _tail = _head;
    } else {
        DouListNode *tmp = new DouListNode(e1e.elem, 0, _head);
        DouList *tt;
        if (e1e.sublist) {
            tt = new DouList(*e1e.sublist);
        } else {
            tt = 0;
        }
        tmp->sublist = tt;
        _head->prev = tmp;
        _head = tmp;
    }
}
void DouList::push_back(const DouListNode &e1e) {
    if (!_tail && !_head) {
        _head = new DouListNode(e1e.elem, 0, 0);
        DouList *tt;
        if (e1e.sublist) {
            tt = new DouList(*e1e.sublist);
        } else {
            tt = 0;
        }
        _head->sublist = tt;
        _tail = _head;
    } else {
        DouListNode *tmp = new DouListNode(e1e.elem, _tail, 0);
        DouList *tt;
        if (e1e.sublist) {
            tt = new DouList(*e1e.sublist);
        } else {
            tt = 0;
        }
        tmp->sublist = tt;
        _tail->next = tmp;
        _tail = tmp;
    }
}
void DouList::pop_front() {
    DouListNode *tmp = _head;
    _head = _head->next;
    _head->prev = 0;
    delete tmp;
}
void DouList::pop_back() {
    DouListNode *tmp = _tail;
    _tail = _tail->prev;
    _tail->next = 0;
    delete tmp;
}
void DouList::operator =(const DouList &oo) {
    clear();
    DouListNode *tmp = oo._head;
    _head = _tail = 0;
    while (tmp) {
        push_back(*tmp);
        tmp = tmp->next;
    }
}
DouList::operator int() {
    return this->_head->elem;
}
ostream& operator<<(ostream &o, const DouList &li) {
    o << li.to_str();
    return o;
}
