#include<stdio.h>
int main() {
	int strcmp(char *p1, char *p2);
	int m;
	char str1[20], str2[20], *p1, *p2;
	printf("please input str1 string:\n");
	scanf("%s", &str1);
	printf("please input str2 string:\n");
	scanf("%s", &str2);
	p1 = &str1[0];
	p2 = &str2[0];
	m = (int)strcmp(p1, p2);
	printf("the result is:%d\n", m);
	//system("pause");
	scanf("%d", &m);
	return 0;
}
int strcmp(char *p1, char *p2) {
	int i;
	i = 0;
	while (*(p1 + i) == *(p2 + i))
		if (*(p1 + i++) == '\0')return 0;
	return (*(p1 + i) - *(p2 + i));
}