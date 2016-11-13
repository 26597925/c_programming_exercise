#include<stdio.h>
int main() {
	int swap(int *p1, int *p2);
	int num1, num2;
	int *pointer1, *pointer2;
	printf("please input two number:\n");
	scanf_s("%d %d", &num1, &num2);
	pointer1 = &num1;
	pointer2 = &num2;
	if (num1 < num2)
		swap(pointer1, pointer2);
	printf("max=%d min=%d", *pointer1, *pointer2);
	system("pause");
	return 0;
}
int swap(int *p1, int *p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}