#include<stdio.h>
#define N 3
int array[N][N];
int main() {
	void convert(int array[][3]);
	int i, j;
	printf("please intput array:\n");
	//-------���������--------------------
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf_s("%d", &array[i][j]);
	//------------------------------------
	printf("\nthe original array:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%5d", array[i][j]);
		printf("\n");
	}
	convert(array);
	printf("\nthe convert array is:\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%5d", array[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
	//���л�������
void convert(int array[][3]) {
	int i, j, temp;
	for(i=0;i<N;i++)
		for (j = i+1; j < N; j++) {
			temp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = temp;
		}
}