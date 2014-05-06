#include "stack.h"
Stack::Stack() {
    top_node = 0;
    count = 0;
}    
bool Stack::empty() const {
    return count == 0;
}    
void Stack::push(const char xxx) {
    count++;
    Node *p = new Node;
    p->entry = xxx;
    p->next = top_node;
    top_node = p;
}    
void Stack::pop() {
    count--;
    Node *p = top_node;
    top_node = top_node->next;
    delete p;
}    
char Stack::top() const {
    return top_node->entry;
}    
int Stack::size() const {
    return count;
}    
