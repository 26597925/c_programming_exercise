#include<stdio.h>
#include<string.h>
#define N 10
char str[N];
int main() {
	void sort(char str[]);
	int i, flag;
	for (flag = 1; flag == 1;) {
		printf("intput string:\n");
		scanf_s("%s", &str);
		if (strlen(str) > N)
			printf("string too long,intput again!");
		else
			flag = 0;
	}
	sort(str);
	printf("string sorted:\n");
	for (i = 0; i < N; i++)
		printf("%c", str[i]);
	printf("\n");
	system("pause");
	return 0;
}
void sort(char str[]) {
	int i, j;
	char t;
	for(j=1;j<N;j++)
		for(i=0;(i<N-j)&&(str[i]!='\0');i++)
			if (str[i] > str[i + 1]) {
				t = str[i];
				str[i] = str[i + 1];
				str[i + 1] = t;
			}
}