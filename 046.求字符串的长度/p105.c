#include<stdio.h>
int main() {
	int length(char *p);
	int len;
	char str[30];
	printf("please input string:\n");
	scanf("%s", str);
	len = length(str);
	printf("the length of string is %d.\n", len);
	system("pause");
	return 0;
}
int length(char *p) {
	int n = 0;
	while (*p != '\0') {
		n++;
		p++;
	}
	return n;
}