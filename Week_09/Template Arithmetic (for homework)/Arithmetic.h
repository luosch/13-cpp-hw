// Copyright 2014 www.lsich.com
#ifndef ARITHMETIC_H
#define ARITHMETIC_H
template<typename lsich>
class Arithmetic {
 public:
    explicit Arithmetic(lsich lsc1, lsich lsc2);
    lsich addition();
    lsich subtraction();
    lsich multiplication();
    lsich division();
 private:
    lsich opnuma, opnumb;
};

#endif
