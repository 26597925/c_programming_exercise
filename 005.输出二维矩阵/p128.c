#include<stdio.h>
int main() {
	int  i, j,n=0;
	for(i=1;i<=4;i++)
		for (j = 1; j <= 5; j++, n++)
		{
			if (n % 5 == 0)printf_s("\n");
			printf_s("%d\t", i*j);		////\t水平制表符，将当前位置移动到下一个tab位置
		}
	printf("\n");
	return 0;
}