#ifndef QUEUE_H
#define QUEUE_H
struct Node {
  int data;
  Node* next;
};
class Queue {
  public:
    // constuctor
    Queue();
    bool empty() const;
    void push(const int item);  // Put the data in the rear of queue
    int getFront();  // Get the first data in the queue
    void pop();   // Pop the first data
    int getSize();  // Get the size of queue
  protected:
    Node *front, *rear;
    int count;
};
#endif
