// Copyright 2014 lsich.com
#ifndef R18_H
#define R18_H
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
class R18 {
 public:
    static R18* getInstance();
    void date_a_girl(const int &name);
    string girls_dated() const;
 private:
    string dated;
};
#endif
