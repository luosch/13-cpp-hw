#include "BulkItem.h"
#include <string.h>
using std::string;
    BulkItem::BulkItem(const string& bN, double sP,
    int qty, double sD):BookItem(bN, sP) {
        minQty_ = qty;
        discount_ = sD;
    }
   double BulkItem::netPrice(int cnt) const {
      if (cnt > minQty_) return cnt*price_*discount_;
      else return cnt*price_;
   }    
