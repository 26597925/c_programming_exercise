#include<stdio.h>
#include<stdlib.h>		//������ʹ��malloc������Ӧ����stdlib.h
int main() {
	void check(int *);		//��������
	int *p1, i;
	p1 = (int *)malloc(5 * sizeof(int));	//���ٶ�̬�ڴ���������ַת����int *�ͣ�Ȼ������p1��
	//����malloc�������ص�ֵ��void*�ͣ�Ҫ��������p1��Ӧ�Ƚ�������ת�����Ѹ�ָ��ת����int*�͡�
	for (i = 0; i < 5; i++)
		scanf_s("%d", p1 + i);
	check(p1);
	system("pause");
	return 0;
}
void check(int *p) {
	int i;
	printf("they are fail:");
	for (i = 0; i < 5; i++)
		if (p[i] < 60)printf("%2d", p[i]);
	printf("\n");
}