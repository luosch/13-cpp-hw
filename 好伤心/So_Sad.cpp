/*��Ŀ����1+2+��+n.
Ҫ����ʹ�ó˳�����for��while��if ��else��switch��case
�ȹؼ����Լ������ж���䣨A?B:C��
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class Num {
  public:
	Num() {
		int tmp = b_;
		b_ = a_ + b_;
		a_ = tmp;
	}
	static int getAns() {return a_;}
  private:
	static int a_;
	static int b_;
};
int Num::a_ = 0;
int Num::b_ = 1;
int main() {
	int n;
	cin >> n;
	Num *p = new Num[n];
	delete []p;
	cout << Num::getAns() << endl;
	return 0;
}
