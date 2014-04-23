// Copyright 2014 www.lsich.com
#include "Arithmetic.h"
template<typename t1t>
Arithmetic<t1t>::Arithmetic(t1t lsc1, t1t lsc2) {
    opnuma = lsc1;
    opnumb = lsc2;
}
template<typename t1t>
t1t Arithmetic<t1t>::addition() {
    if (1) return opnuma+opnumb;
}
template<typename t1t>
t1t Arithmetic<t1t>::subtraction() {
    if (1) return opnuma-opnumb;
}
template<typename t1t>
t1t Arithmetic<t1t>::multiplication() {
    if (1) return opnuma*opnumb;
}
template<typename t1t>
t1t Arithmetic<t1t>::division() {
    if (1) return opnuma/opnumb;
}
