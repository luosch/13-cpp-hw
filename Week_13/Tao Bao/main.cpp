#include <iostream>
#include "Source.h"
#include "printItem.h"
 
using namespace std;
 
int main(int argc, char *argv[]) {
  TaoBaoItem item[4];
 
  for (int i = 0; i < 4; i++) {
      cin >> item[i].price >> item[i].volume_of_sales;
  }
 
  SortByPrice price;
  SortBySales sales;
 
  TaoBao taobao(&price);
  taobao.sort(item, 4);
  printItem(item, 4);
 
  taobao.SetSortStrategy(&sales);
  taobao.sort(item, 4);
  printItem(item, 4);
 
  return 0;
}