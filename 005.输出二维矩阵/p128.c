#include<stdio.h>
int main() {
	int  i, j,n=0;
	for(i=1;i<=4;i++)
		for (j = 1; j <= 5; j++, n++)
		{
			if (n % 5 == 0)printf_s("\n");
			printf_s("%d\t", i*j);		////\tˮƽ�Ʊ��������ǰλ���ƶ�����һ��tabλ��
		}
	printf("\n");
	return 0;
}