// Copyright 2014 lsich
#ifndef SOURCE_H
#define SOURCE_H
#include "Taobao.h"
#include <algorithm>
using std::sort;
typedef TaoBaoItem TBI;
bool cmp1(const TBI &a, const TBI &b) {
    return a.price > b.price;
}
bool cmp2(const TBI &a, const TBI &b) {
    return a.volume_of_sales > b.volume_of_sales;
}
inline void swap(TBI *a, TBI *b) {
    int __pri = a->price;
    int __vos = a->volume_of_sales;
    a->price = b->price;
    a->volume_of_sales = b->volume_of_sales;
    b->price = __pri;
    b->volume_of_sales = __vos;
}

class SortByPrice: public SortInterface {
 public:
    void DoSort(TBI __item[], int __size) {
        sort(__item, __item+__size, cmp1);
    }
};

class SortBySales: public SortInterface {
 public:
    void DoSort(TBI __item[], int __size) {
        sort(__item, __item+__size, cmp2);
    }
};

class TaoBao {
 public:
    explicit TaoBao(SortInterface* __strategy): __sortType(__strategy) { }
    void SetSortStrategy(SortInterface* __strategy) {__sortType = __strategy;}
    void sort(TBI __item[], int __size) {__sortType->DoSort(__item, __size);}

 private:
    SortInterface *__sortType;
};

#endif
