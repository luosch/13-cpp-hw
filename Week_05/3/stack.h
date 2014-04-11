#ifndef STACK_H
#define STACK_H
class Stack {
  public:
    Stack();
    void push(char c);
    char pop();
    char top() const;
    bool isEmpty() const;
    void clear();
    int getSize() const;
  private:
    char base[200];
    int size;
};
#endif
