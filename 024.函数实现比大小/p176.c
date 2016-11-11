#include<stdio.h>
int main() {
	int max(int x, int y);
	int a, b, c;
	printf("please intput two integer numbers:\n");
	scanf_s("%d %d", &a, &b);
	c = max(a, b);
	printf("the max number is: %d\n", c);
	system("pause");
	return 0;
}
int max(int x, int y) {
	int temp;
	temp = x > y ? x : y;
	return temp;
}