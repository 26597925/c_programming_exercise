#include<stdio.h>
int main() {
	int digui(int x);
	int a,b;
	printf("please intput a number:\n");
	scanf_s("%d", &a);
	b = digui(a);
	printf("the sort result is: %d\n", b);
	system("pause");
	return 0;
}
int digui(int x) {
	if (x == 1 || x == 0)
		return 1;
	else
		return digui(x - 1)*x;
}