#include<stdio.h>
int main() {
	void input(int *);
	void max_min_value(int *);
	void output(int *);
	int number[10];
	input(number);
	max_min_value(number);
	output(number);
	system("pause");
	return 0;
}
