#ifndef Taobao_H
#define Taobao_H
struct TaoBaoItem {
  int price;
  int volume_of_sales;
};
 
class SortInterface {
 public:
  virtual ~SortInterface() {}
  virtual void DoSort(TaoBaoItem item[], int size) = 0;
};

#endif