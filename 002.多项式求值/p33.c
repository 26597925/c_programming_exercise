#include<stdio.h>
int main() {
//	int a = 1;
	//double sum = 0.0, n = 1.0,b=1.0;
	//while (n <= 100) {
		//sum += b;
		//a = -a;
		//n++;
		//b = a / n;
	//}
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;
	while (deno < 100) {
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}
	printf_s("the result is:%f\n", sum);
	return 0;
}