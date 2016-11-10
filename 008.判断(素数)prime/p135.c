#include<stdio.h>
#include<math.h>
int main() {
	int a, b, i;
	printf("please intput a number:\n");
	scanf_s("%d",& a);
	b = sqrt(a);
	for (i = 2; i <= b; i++)
		if (a%i == 0)break;
	if (i <= b)printf_s("%d is not a prime number.\n",a);
	else printf_s("%d is a prime number.\n", a);
	return 0;

}//