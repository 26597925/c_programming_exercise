#include<stdio.h>
int main()
{
	int p, r, n, m, temp;
	printf_s("please int put two number:\n");
	scanf_s("%d %d", &n, &m);
	if (n < m) {
		temp = n;
		n = m;
		m = temp;
	}
	p = n*m;
	while (m != 0) {
		r = n%m;
		n = m;
		m = r;
	}
	printf_s("���ǵ����Լ��Ϊ��%d\n", n);
	printf_s("���ǵ���С������Ϊ��%d\n", p / n);
	return 0;
}//