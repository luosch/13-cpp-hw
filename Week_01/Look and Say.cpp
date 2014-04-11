// soj1491.Look and Say
#include <stdio.h>
#include <string.h>
int main() {
	int T, num, i, len;
	char str[1010], tmp;
	scanf("%d\n", &T);
	while (T--) {
		scanf("%s", str);
		len = strlen(str);
		num = i = 1;
		tmp = str[0];
		while (i < len) {
			if (tmp != str[i]) {
				printf("%d%c", num, tmp);
				tmp = str[i];
				num = 1;
			} else num++;
			i++;
		}
		printf("%d%c\n", num, str[len-1]);
	}
	return 0;
}
 	
