#include "newList.h"
#include <iostream>
using std::cout;
using std::endl;
template <class __T>
void newList<__T>::traverse(void (*visit)(const __T&)) {
    for (auto i = this->begin(); i != this->end(); i++)
        visit(*i);
}

template <class __T>
void newList<__T>::find(const __T &__elem) {
    int __count = 0;
    cout << "find" << endl;
    for (auto i = this->begin(); i != this->end(); i++, __count++) {
        if (*i == __elem) {
            cout << __count << endl;
        }
    }
    cout << "done" << endl;
}

template class newList<int>;
template class newList<double>;
