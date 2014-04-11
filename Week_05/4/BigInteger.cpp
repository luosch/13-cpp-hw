#include "BigInteger.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::ostream;
BigInteger::BigInteger() {
    size_ = 0;
}
BigInteger::BigInteger(const string& number) {
    data_ = new int[3000];
    size_ = number.length();
    for (int i = 0; i < number.length(); i++) {
        data_[i] = (number[number.length()-i-1]-'0');
    }
}
BigInteger::BigInteger(const BigInteger& o) {
    data_ = new int[3000];
    size_ = o.size_;
    for (int i = 0; i < size_; i++) {
        data_[i] = o.data_[i];
    }
}
BigInteger operator+(const BigInteger& ll,
const BigInteger& rr) {
    BigInteger l(ll), r(rr);
    if (l.size_ > r.size_) {
        l.data_[l.size_] = 0;
        for (int i = 0; i < r.size_; i++) {
            l.data_[i]+=r.data_[i];
            l.data_[i+1]+=l.data_[i]/10;
            l.data_[i]%=10;
        }
        for (int i = r.size_; i < l.size_; i++) {
            l.data_[i+1]+=l.data_[i]/10;
            l.data_[i]%=10;
        }
        if (l.data_[l.size_]) l.size_++;
        return l;
    } else {
        r.data_[r.size_] = 0;
        for (int i = 0; i < l.size_; i++) {
            r.data_[i]+=l.data_[i];
            r.data_[i+1]+=r.data_[i]/10;
            r.data_[i]%=10;
        }
        for (int i = l.size_; i < r.size_; i++) {
            r.data_[i+1]+=r.data_[i]/10;
            r.data_[i]%=10;
        }
        if (r.data_[r.size_]) r.size_++;
        return r;
    }
}
BigInteger operator-(const BigInteger& l,
const BigInteger& r) {
    BigInteger tmp(l);
    for (int i = 0; i < r.size_; i++) {
        tmp.data_[i]-=r.data_[i];
    }
    for (int i = 0; i < l.size_; i++) {
        if (tmp.data_[i] < 0) {
            tmp.data_[i]+=10;
            tmp.data_[i+1]-=1;
        }
    }
    for (int i = tmp.size_-1; i >= 0; i--) {
        if (!tmp.data_[i]) tmp.size_--;
        else break;
    }
    if (tmp.size_ == 0) tmp.size_++;
    return tmp;
}
ostream& operator<<(ostream& out, const BigInteger& Bint) {
    for (int i = Bint.size_-1; i >= 0; i--) {
        out << Bint.data_[i];
    }
    return out;
}
BigInteger::~BigInteger() {
    delete []data_;
}
