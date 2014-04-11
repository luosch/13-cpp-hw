#ifndef _GAYFOOLSHY_H_
#define _GAYFOOLSHY_H_
 
#include "FuErDai.h"
#include "GuanErDai.h"
#include <iostream>
using std::string;
 
class GayFoolShy : public FuErDai, private GuanErDai {
 public:
  // �����ֱ�Ϊ��˧�����֡����׵����֡����׵��Ʋ������ɵ����֡����ɵ��Ʋ�
  GayFoolShy(const string& name,
             const string& fName,
             double fBalance,
             const string& gName,
             double gBalance);
 
  string getName() const;  // ��ȡ��˧������
  double getBalance() const;  // ��ȡ��˧���Ʋ�
 
 private:
  string name_;
};
 
#endif  // _GAYFOOLSHY_H_
