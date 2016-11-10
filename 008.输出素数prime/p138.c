#include<stdio.h>
#include<math.h>
int main() {
	int n, k, i, m = 0;
	for (n = 101; n < 200; n += 2)
	{
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n%i == 0)break;
		if (i > k) {
			printf_s("%-5d", n);
			m = m + 1;
		}
		if (m % 10 == 0)printf_s("\n");
	}
	printf_s("\n");
	return 0;
}