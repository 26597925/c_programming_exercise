#include<stdio.h>
#include"digui.h"
int main() {
	int fib(int f);
	int a;
	printf_s("please intput a number:\n");
	scanf("%d", &a);
	fib(a);
	printf_s("the result is:%d\n", fib(a));
	return 0;
}
/*int fib(int f) {
	int y;
	if (f == 0 || f == 1) return 1;
	else return y = fib(f - 1) + fib(f - 2);
}*/