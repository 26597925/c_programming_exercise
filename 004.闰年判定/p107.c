/*�ж�����:1.��4�����Ҳ��ܱ�100������Ϊ����.����2004���������,1901�겻�����꣩ 
					2.�������ܱ�400������������.(��2000��������,1900�겻������)*///
#include<stdio.h>
int main()
{
	int year;
	printf("please intput a year:\n");
	scanf_s("%d", &year);
	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf_s("%d is a leap year. \n", year) : printf_s("%d is not a leap year.\n", year);
	return 0;
}