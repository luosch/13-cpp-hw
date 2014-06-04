// Copyright (c) lsich.com
#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
class FileSymItem {
 protected:
    string __name__;
 public:
    explicit FileSymItem(const string& lsc): __name__(lsc) { }
    void rename(const string& lsc) {__name__ = lsc;}
    virtual int getSize() = 0;
};

class File: public FileSymItem {
 public:
    File(const string& lsc, const int& zyl = 0): FileSymItem(lsc),
    __size__(zyl) { }
    ~File() {cout << "Del File : " << __name__ << endl;}
    virtual int getSize() {return __size__;}
    void setSize(const int& lsc) {__size__ = lsc;}
 private:
    int __size__;
};

class Dir: public FileSymItem {
 private:
    static const int MAX_ITEM_COUNT = 20;
    FileSymItem* __ff__[MAX_ITEM_COUNT];
    int __count__;

 public:
    explicit Dir(const string& name): FileSymItem(name), __count__(0) { }
    void addFileSymItem(FileSymItem* lsc) {
        if (__count__ < MAX_ITEM_COUNT) __ff__[__count__++] = lsc;
    }
    void delFileSymItem(FileSymItem* delItem) {
        int find = -1;
        for (int i = 0; i < __count__; i++) {
            if (delItem == __ff__[i]) {
                find = i;
                break;
            }
        }
        if (find == -1) return;
        for (int i = find; i < __count__; i++) {
            __ff__[i] = __ff__[i+1];
        }
        __count__--;
    }
    virtual int getSize() {
        int lsc = 0;
        for (int i = 0; i < __count__; i++) {
            lsc+=__ff__[i]->getSize();
        }
        return lsc;
    }
    ~Dir() {
        cout << "Del Dir : " << __name__ << endl;
    }
};

#endif
