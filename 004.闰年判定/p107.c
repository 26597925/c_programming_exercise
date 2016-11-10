/*判断条件:1.被4整除且不能被100整除的为闰年.（如2004年就是闰年,1901年不是闰年） 
					2.世纪年能被400整除的是闰年.(如2000年是闰年,1900年不是闰年)*///
#include<stdio.h>
int main()
{
	int year;
	printf("please intput a year:\n");
	scanf_s("%d", &year);
	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf_s("%d is a leap year. \n", year) : printf_s("%d is not a leap year.\n", year);
	return 0;
}