#include<stdio.h>
int main() {
	char *name[] = { "follow me","BASIC","GREAT WALL","FORTRAN","Compter design" };
	char **p;
	int i;
	for (i = 0; i < 5; i++) {
		p = name + i;
		printf("%s\n", *p);
	}
	system("pause");
	return 0;
}