#include "DouList.h"
#include <string>
#include <iostream>
#include <sstream>
using std::ostream;
using std::stringstream;
using std::string;
using std::cout;
using std::endl;
int DouList::_error_sign = 0;
DouList::DouList() {
	m_head = m_tail = 0;
}
void DouList::clear() {
	while (m_head) {
		DouListNode *tmp = m_head;
		m_head = m_head->next;
		delete tmp;	
	}
	m_head = m_tail = 0;
}
DouList::DouList(const DouList &src) {
	DouListNode *tmp = src.m_head;
	m_head = m_tail = 0;
	while (tmp) {
		push_back(tmp->elem);
		tmp = tmp->next;
	}
}
DouList::~DouList() {
	while (m_head) {
		DouListNode *tmp = m_head;
		m_head = m_head->next;
		delete tmp;	
	}
}
bool DouList::empty() const {return !m_head&&!m_tail;}
string DouList::to_str() const {
	string res = "[", t1t;
	stringstream stream;
	if (empty()) return "[]";
	DouListNode *tmp = m_head;
	if (tmp) {
		stream << tmp->elem;
		stream >> t1t;
		res+=t1t;
		stream.clear();	
		tmp = tmp->next;
	}
	while (tmp) {
		res+=", ";
		stream << tmp->elem;
		stream >> t1t;
		res+=t1t;
		stream.clear();	
		tmp = tmp->next;
	}
	res+="]";
	return res;
}
int DouList::front() const {
	return m_head->elem;	
}
int DouList::back() const {
	return m_tail->elem;	
}
void DouList::push_front(const int &e1e) {
	if (!m_head && !m_tail) {
		m_head = new DouListNode(e1e, 0, 0);
		m_tail = m_head;
	}
	else {
		DouListNode *tmp = new DouListNode(e1e, 0, m_head);
		m_head->prev = tmp;
		m_head = tmp;
	}
}
void DouList::push_back(const int &e1e) {
	if (!m_tail && !m_head) {
		m_tail = new DouListNode(e1e, 0, 0);
		m_head = m_tail;
	}
	else {
		DouListNode *tmp = new DouListNode(e1e, m_tail, 0);
		m_tail->next = tmp;
		m_tail = tmp;
	}
}
void DouList::pop_front() {
	DouListNode *tmp = m_head;
	m_head = m_head->next;
	m_head->prev = 0;
	delete tmp;
}
void DouList::pop_back() {
	DouListNode *tmp = m_tail;
	m_tail = m_tail->prev;
	m_tail->next = 0;
	delete tmp;	
}
void DouList::operator=(const DouList &oo) {
	clear();
	DouListNode *tmp = oo.m_head;
	while (tmp) {
		push_back(tmp->elem);
		tmp = tmp->next;
	}
}
ostream& operator<<(ostream &o, const DouList &li) {
	o << li.to_str();
	return o;
}

