#include<stdio.h>
#include<math.h>
int main() {
	int sign = 1,a=0;
	double pi= 0.0,n = 1.0,term = 1.0;
	while (fabs(term) >= 1e-6) {
		pi += term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
		a++;
	}
	pi = pi * 4;
	printf("ѭ��������:%d\n", a);
	printf_s("pi=%10.8f\n", pi);			//%m.nfָ�����ݿ�Ⱥ�С��λ��
	return 0;
}