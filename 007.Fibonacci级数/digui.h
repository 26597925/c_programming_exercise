//#pragma once
#include<stdio.h>
int fib(int f) {
	int y;
	if (f == 0 || f == 1) return 1;
	else return y = fib(f - 1) + fib(f - 2);
}
