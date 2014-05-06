#ifndef STACK_H
#define STACK_H
struct Node {
  char entry;
  Node *next;
  Node() {
    next = 0;
  }
  Node(char data, Node *add_on = 0) {
    entry = data;
    next = add_on;
  }
};
class Stack {
  public:
    Stack();
    bool empty() const;
    void push(const char item);
    void pop();
    char top() const;
    int size() const;
  protected:
    Node *top_node;
    int count;
};
#endif
