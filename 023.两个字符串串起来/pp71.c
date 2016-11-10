#include<stdio.h>
int main() {
	char s1[80], s2[40];
	int i = 0,j = 0;
	printf("intput string1:\n");
	scanf("%s", s1);
	printf("intput string2:\n");
	scanf("%s", s2);
	while (s1[i] != '\0') {
		i++;
	}
	while (s2[j] != '\0') {
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	printf("\nthe new strings is %s\n", s1);
	return 0;
}