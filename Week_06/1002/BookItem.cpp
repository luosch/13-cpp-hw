#include "BookItem.h"
#include <string.h>
using std::string;
BookItem::BookItem(const string& xx, double yy) {
    name_ = xx;
    price_ = yy;
}    
 
string BookItem::getName() const {
    return name_;
}    
double BookItem::netPrice(int cnt) const {
    return cnt * price_;
}    
