#include<stdio.h>
int main() {
	int upper = 0, lower = 0, digit = 0, space = 0, other = 0, i = 0;
	char *p, s[30];
	printf("input string:\n");
	while ((s[i] = getchar()) != '\n')i++;
	p = &s[0];
	while (*p != '\n') {
		if (('A' <= *p) && (*p <= 'Z'))
			++upper;
		else if (('a' <= *p) && (*p <= 'z'))
			++lower;
		else if (*p == ' ')
			++space;
		else if ((*p <= '9') && (*p >= '0'))
			++digit;
		else
			++other;
		p++;
	}
	printf("upper case:%d	lower case:%d", upper, lower);
	printf("	space:%d		digit:%d	other:%d\n", space, digit, other);
	system("pause");
	return 0;
}