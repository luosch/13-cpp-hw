// Copyright 2014 lsich
#ifndef PAIR_H
#define PAIR_H
template <class T1, class T2>
class Pair {
 public:
    void setFirst(T1 _input) {
        __first = _input;
    }
    void setSecond(T2 _input) {
        __second = _input;
    }
    void swap(Pair &_input) {
        T1 tmp_T1 = _input.getFirst();
        T2 tmp_T2 = _input.getSecond();
        _input.setFirst(this->__first);
        _input.setSecond(this->__second);
        this->setFirst(tmp_T1);
        this->setSecond(tmp_T2);
    }
    T1 getFirst() {return __first;}
    T2 getSecond() {return __second;}

 private:
    T1 __first;
    T2 __second;
};

#endif
