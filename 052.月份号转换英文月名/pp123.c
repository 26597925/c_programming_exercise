#include<stdio.h>
int main() {
	char *month_name[12] = { "January","February","March","April","May","June","July",
		"August","September","October","November","December" };
	int n;
	printf("please input the month:\n");
	scanf_s("%d", &n);
	if ((n <= 12) && (n >= 1))
		printf("lt is %s.\n", *(month_name + (n - 1)));
	else
		printf("lt is wrong.\n");
	system("pause");
	return 0;
}