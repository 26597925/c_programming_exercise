#include<stdio.h>
int main() {
	int a = 100, b = 10;		//�������ͱ�������ʼ��
	int *pointer_1, *pointer_2;		//����ָ���������ݵ�ָ�����pointer_1,*pointer_2
	pointer_1 = &a;		//�ѱ���a�ĵ�ַ����ָ�����pointer_1
	pointer_2 = &b;		//�ѱ���b�ĵ�ַ����ָ�����pointer_2
	printf_s("a=%d,b=%d\n", a, b);	//�������a,b��ֵ
	printf("*pointer_1=%d,*pointer_2=%d\n", *pointer_1, *pointer_2);		//�������a,b��ֵ
	system("pause");
	return 0;
}