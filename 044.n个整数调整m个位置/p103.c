#include<stdio.h>
int main() {
	void move(int array[30], int n, int m);
	int n,i,m;
	int a[30];
	printf("how many number in the array:\n");
	scanf_s("%d", &n);
	printf("please input the %d number\n", n);
	for(i=0;i<n;i++)
		scanf_s("%d", &a[i]);
	printf("how many place want to move:\n");
	scanf_s("%d", &m);
	move(a, n, m);
	printf("the result is:\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
void move(int array[30], int n, int m) {
	int *p, array_end;
	array_end = *(array + n - 1);
	for (p = array + n - 1; p > array; p--)
		*p = *(p - 1);
	*array = array_end;
	m--;
	if (m > 0)move(array, n, m);
}