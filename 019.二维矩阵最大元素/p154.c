#include<stdio.h>
int main() {
	int a[3][4] = { { 1,2,3,4 },{ 9,8,7,6 },{ -10,10,-5,2 } };
	int i, j, max, row = 0, colum = 0;
	max = a[0][0];
	for (i = 0; i<3; i++)
		for (j = 0; j < 4; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				row = i;
				colum = j;
			}
		}
	printf_s("the max number is:%d\n the number locate is%d %d", max, row, colum);
	return 0;
}