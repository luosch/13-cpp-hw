// 一开始看题目还以为是高精度进制转换
// 结果答案竟然输入一个整数一个字符串
// 结果就呵呵了
#include <iostream>
#include <string.h>
#include <ctype.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	char str[130];
	int end, len, num[130] = {0}, ans[130] = {0}, i = 0, a = 0, flag = 0;
	cin.getline(str, 130);
	len = strlen(str);
	for (end = 0; end < len && isdigit(str[end]); end++) { }
	while (i < end) num[i] = str[i++]-'0';
	while (!flag) {
		flag = 1;
		for (i = 0; i < end; i++) ans[a] = (ans[a]*10+num[i])%8;
			for (i = 0; i < end; i++) {
				num[i+1]+=num[i]%8*10;
				num[i]/=8;
				if (num[i]) flag = 0;
			}
			a++;
		}
	for (i = a; i >= 0; i--) cout << ans[i];
	for (i = end; i < len; i++) cout << str[i];
	cout << endl;
	return 0;
}
 	