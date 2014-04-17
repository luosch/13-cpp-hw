#ifndef SSCPP2014_DOULIST_A_H
#define SSCPP2014_DOULIST_A_H
 
#include <string>
 
class DouList;
 
struct DouListNode {
  int elem;
  DouListNode *prev, *next;
  DouList *sublist;
  DouListNode(int e = 0, DouListNode *p = 0, DouListNode *n = 0) {
    elem = e;
    prev = p;
    next = n;
    sublist = 0;
  }
};
 
class DouList {
  private:
    DouListNode *_head, *_tail;
  public:
    DouList();
    DouList(const DouList &src);
    ~DouList();
    void clear();
    bool empty() const;
    std::string to_str() const;
    DouList front() const;
    DouList back() const;
    void push_front(const DouListNode &e);
    void push_back(const DouListNode &e);
    void pop_front();
    void pop_back();
    void operator=(const DouList &other);
    operator int();  // consider why i define it.
    friend std::ostream& operator<<(std::ostream &out,
           const DouList &list);
    // non-meaning static value
};
 
#endif
