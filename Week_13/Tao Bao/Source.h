// Copyright 2014 lsich
#ifndef SOURCE_H
#define SOURCE_H
#include "Taobao.h"
typedef TaoBaoItem TBI;
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
        for (int i = 0; i < __size; i++) {
            for (int j = i+1; j < __size; j++) {
                if (__item[i].price < __item[j].price) {
                    swap(__item+i, __item+j);
                }
            }
        }
    }
};

class SortBySales: public SortInterface {
 public:
    void DoSort(TBI __item[], int __size) {
        for (int i = 0; i < __size; i++) {
            for (int j = i+1; j < __size; j++) {
                if (__item[i].volume_of_sales < __item[j].volume_of_sales) {
                    swap(__item+i, __item+j);
                }
            }
        }
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
