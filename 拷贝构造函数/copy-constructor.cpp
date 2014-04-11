#include <iostream>
using std::cout;
using std::endl;
class test {
  public:
    test(int n=0) {
		data = new int [n];
		for (int i = 0; i < n; i++) data[i] = n*n;
	}
    test(const test& o) {
		data = new int[100];
		cout << "Copy" << endl;
	}
	~test() {
		delete []data;
	}
  private:
	int *data;
};
void t() {
	test a(2), b(3);
	test x = a, y(b);
	test z;
	z = a;
}
int main() {
	t();
	return 0;
}
