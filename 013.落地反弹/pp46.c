#include<stdio.h>
int main() {
	double sn = 100, hn = sn / 2;
	int n,j;
	printf("please intput the number:\n");
	scanf_s("%d", &j);
	for (n = 2; n <= j; n++) {
		sn = sn + 2 * hn;
		hn = hn / 2;
	}
	printf("第%d次落地时共经过%f米\n", j, sn);
	printf("第%d次落地反弹了%f米\n", j,hn);
	return 0;
}//