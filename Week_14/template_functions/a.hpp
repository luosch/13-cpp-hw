// Copyright (c) lsich.com
#ifndef A_HPP
#define A_HPP
template <typename __T>
void swap_practice(const __T &__a, const __T &__b) {
    __T &a = const_cast<__T&>(__a);
    __T &b = const_cast<__T&>(__b);
    __T tmp = a;
    a = b;
    b = tmp;
}
template <typename __T>
void inc(const __T &__input) {
    ++(const_cast<__T&>(__input));
    // ++__input;
}
template <typename __T>
void dec(const __T &__input) {
    --(const_cast<__T&>(__input));
}
template <typename __T>
__T add(const __T &__a, const __T &__b) {
    return __a+__b;
}
template <typename __T>
__T subtract(const __T &__a, const __T &__b) {
    return __a-__b;
}
template <typename __T>
__T multiply(const __T &__a, const __T &__b) {
    return __a*__b;
}
template <typename __T>
__T divide(const __T &__a, const __T &__b) {
    if (__b == 0)
        return 0;
    else
        return __a/__b;
}

#endif
