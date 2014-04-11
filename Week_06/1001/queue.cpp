#include "queue.h"
#include <iostream>
using std::cout;
using std::endl;
Queue::Queue() {
    count = 0;
    front = 0;
    rear = 0;
}    
bool Queue::empty() const {
    return count==0;
}    
void Queue::push(const int tmp) {
    count++;
    Node *t = new Node;
    t->data = tmp;
    t->next = 0;
    if (rear==0) {
      front = rear = t;
    } else{
      rear->next = t;
      rear = t;
    }
}
void Queue::pop() {
    if (count) {
        count--;
        Node *t = front;
        front = front->next;
        if (front == 0) rear = 0;
        delete t;
    }    
}  
int Queue::getFront() {return front->data;}
int Queue::getSize() {return count;}
