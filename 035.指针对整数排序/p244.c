#include<stdio.h>
int main() {
	void sort(int x[], int n);
	int i, *p, a[10];
	p = a;		//指针变量p指向a[0]
	printf("please input ten number:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d",p++);
	p = a;		//指针变量重新指向a[0]
	sort(p, 10);
	//---------------------------------
	for (p = a, i = 0; i < 10; i++) {
		printf("%2d", *p);
		p++;
	}
	//------------------------------------
	printf("\n");
	system("pause");
	return 0;
}
//------------------------------------------
void sort(int x[], int n) {
	int i, j, k, t;
	for (i = 0; i < n - 1; i++) {
		k = i;
		for (j = i + 1; j < n; j++) {
			if (x[j] > x[k])k = j;
			if (k != i) {
				t = x[i];
				x[i] = x[k];
				x[k] = t;
			}
		}
	}
}
//---------------------------------------------
