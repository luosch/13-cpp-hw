#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::sort;
using std::endl;
using std::string;
using std::vector;
bool cmp(string a, string b) {
	return a+b > b+a;
}
int main() {
	int N;
	string tmp;
	vector<string> max;
	vector<string>::iterator iter;
	cin >> N;
	while (N--) {
		cin >> tmp;
		max.push_back(tmp);
	}
	sort(max.begin(), max.end(), cmp);
	if (!max.empty()) {
		for (iter = max.begin(); iter != max.end(); ++iter) {
			cout << *iter;
		}
		cout << endl;
	}
	return 0;
}