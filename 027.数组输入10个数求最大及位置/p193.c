#include<stdio.h>
int main() {
	int max(int x, int y);
	int a[10], i, m, n;
	printf("please intput ten number:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	printf("\n");
	//-------------------------------------------
	for (i = 1, m = a[0], n = 0; i < 10; i++) {
		if (max(m, a[i]) > m) {
			m = max(m, a[i]);
			n = i;
		}
	}
	//--------------------------------------------
	printf("the largest number is %d\nit is the%dth number.\n", m, n + 1);
	system("pause");
	return 0;
}
int max(int x, int y) {
	return (x > y ? x : y);
}