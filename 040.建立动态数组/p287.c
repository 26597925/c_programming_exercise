#include<stdio.h>
#include<stdlib.h>		//程序中使用malloc函数，应包含stdlib.h
int main() {
	void check(int *);		//函数声明
	int *p1, i;
	p1 = (int *)malloc(5 * sizeof(int));	//开辟动态内存区，将地址转换成int *型，然后存放在p1中
	//调用malloc函数返回的值是void*型，要把它赋给p1，应先进行类型转换，把该指针转换成int*型。
	for (i = 0; i < 5; i++)
		scanf_s("%d", p1 + i);
	check(p1);
	system("pause");
	return 0;
}
void check(int *p) {
	int i;
	printf("they are fail:");
	for (i = 0; i < 5; i++)
		if (p[i] < 60)printf("%2d", p[i]);
	printf("\n");
}