#include<stdio.h>
int main() {
	char c1, c2;
	 printf_s("please intput a alphet:\n");  //ascllĞ¡Ğ´×ÖÄ¸·¶Î§65-90´óĞ´×ÖÄ¸·¶Î§97-122
	scanf_s("%c", &c1);
	c2 = c1 + 32;
	printf_s("%c",c2);
	printf_s("%d", c2);
	return 0;

}