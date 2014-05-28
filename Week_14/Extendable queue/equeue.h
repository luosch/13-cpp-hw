#pragma once

template<class T>
struct MemBlock {
  T dat[1024];
  MemBlock<T> *next, *prev;
};

template<class T>
class Queue {
  public:
    Queue();
    ~Queue();
    void clear();
    bool empty() const;
    int size() const;
    T front() const;
    void push(const T&);
    T pop();
  private:
    MemBlock<T> *frontBlock_, *backBlock_;
    int count_, size_, ptrf_, ptrb_;
    void appendBlock();
    void reduceBlock();
    void reset();
};