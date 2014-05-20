#include "Taobao.h"
#include <iostream>
using std::cout;
using std::endl;
 
void printItem(TaoBaoItem arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << arr[i].price << " " << arr[i].volume_of_sales << endl;
  }
}