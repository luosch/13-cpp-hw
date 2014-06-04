#ifndef NEWLIST_H
#define NEWLIST_H
#include <list>
using std::list;
template <class T>
class newList: public list<T> {
 public:
    void traverse(void (*visit)(const T&));
    void find(const T &__elem);
};

#endif
