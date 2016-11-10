#include<stdio.h>
int main() {
	int i,j,t;
	int a[10];
	printf("please intput ten number:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d",& a[i]);
	printf("\n");
	for(j=0;j<9;j++)
		for (i = 0; i < 9-j; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	printf("the sort of result is:\n ");
	for (i = 0; i < 10; i++)
		printf("%-2d", a[i]);
	printf("\n");
	return 0;
}