#include "String.h"
#include <cstdio>
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
const int maxx = 1000;
char String::_error_sign = 0;
String::String() {
    _buff = new char[maxx];
    memset(_buff, 0, sizeof(_buff));
    _length = _size = 0;
}
int String::length() const {return _length;}
char& String::operator[](const int &index) {
    return _buff[index];
}
String::String(const char *srcc) {
    _buff = new char[maxx];
    memset(_buff, 0, sizeof(_buff));
    _length=strlen(srcc);
    _size=strlen(srcc);
    snprintf(_buff, _size, "%s", srcc);
}
String::String(const String &srcc) {
    _buff = new char[maxx];
    memset(_buff, 0, sizeof(_buff));
    _length = srcc._length;
    _size = srcc._length;
    snprintf(_buff, _size, "%s", srcc._buff);
}
String::~String() {
    if (_buff) delete []_buff;
}
void String::assign(const char *s) {
    _length = strlen(s);
    _size = strlen(s);
    memset(_buff, 0, _size);
    snprintf(_buff, _size, "%s", s);
}
void String::append(const char &o) {
    _buff[_length] = o;
    _buff[_length+1] = 0;
    _length++;
    _size++;
}
void String::clear() {
    if (_buff) {
        delete []_buff;
        _buff = 0;
    }
    _length = _size = 0;
}
int String::compare(const String &o) const{
    for (int i = 0; i < maxx && _buff[i] || o._buff[i]; i++) {
        if (_buff[i] > o._buff[i]) return 1;
        else if (_buff[i] < o._buff[i]) return -1;
    }
    return 0;
}
bool String::operator==(const String &oo) const {
    return !compare(oo);
}
const char* String::c_str() const {
    const char *res = _buff;
    return res;
}
bool String::empty() const {return !_size;}
String String::substr(const int &p, const int &cc) const {
    String sub;
    if (pos >= _length || pos + count > _length) return sub;
    for (int i = 0; i < cc; i++) {
        sub.append(_buff[i+p]);
    }
    sub.append(0);
    return sub;
}
int String::find(const String &o, int pos) const {
    for (int i = pos; i+o.length() < _length; i++) {
        if (substr(i, o.length()) == o) return i;
    }
    return _length;
}
void String::operator=(const String &o) {
    _size = o.length();
    _length = o.length();
    for (int i = 0; i <= _size; i++) {
        _buff[i] = o._buff[i];
    }
}
void String::operator=(const char *src) {
    _size = strlen(src);
    _length = strlen(src);
    for (int i = 0; i <= strlen(src); i++) {
        _buff[i] = src[i];
    }
}
String String::operator+(const String &o) const {
    String ans(*this);
    ans._length = this->length();
    for (int i = 0; i < o._size; i++) {
        char x = o.c_str()[i];
        ans.append(x);
    }
    return ans;
}
bool String::operator<(const String &other) const {
    return compare(other) == -1;
}
bool String::operator<=(const String &other) const {
    return compare(other) == -1 || !compare(other);
}
bool String::operator>(const String &other) const {
    return compare(other) == 1;
}
bool String::operator>=(const String &other) const {
    return compare(other) == 1 || !compare(other);
}
    
bool String::operator!=(const String &other) const {
    return compare(other);
}
ostream& operator<<(ostream& out, const String &s) {
    out << s.c_str();
    return out;
}
