#include "stack.h"
Stack::Stack() {
    size = 0;
}
void Stack::push(char c) {
    base[size++] = c;
}
char Stack::pop() {
    return base[--size];
}
char Stack::top() const {
    return base[size-1];
}
bool Stack::isEmpty() const {
    return size == 0;
}
void Stack::clear() {
    size = 0;
}
int Stack::getSize() const {
    return size;
}
