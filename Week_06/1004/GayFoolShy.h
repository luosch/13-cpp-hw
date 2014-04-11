#ifndef _GAYFOOLSHY_H_
#define _GAYFOOLSHY_H_
 
#include "FuErDai.h"
#include "GuanErDai.h"
#include <iostream>
using std::string;
 
class GayFoolShy : public FuErDai, private GuanErDai {
 public:
  // 参数分别为高帅富名字、他亲爹名字、他亲爹财产、他干爹名字、他干爹财产
  GayFoolShy(const string& name,
             const string& fName,
             double fBalance,
             const string& gName,
             double gBalance);
 
  string getName() const;  // 获取高帅富名字
  double getBalance() const;  // 获取高帅富财产
 
 private:
  string name_;
};
 
#endif  // _GAYFOOLSHY_H_
