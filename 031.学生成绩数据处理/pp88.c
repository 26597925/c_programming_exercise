#include<stdio.h>
#define N 10
#define M 5
float score[N][M];
float a_stu[N], a_cour[M];
int r, c;
int main() {
	int i, j;
	float h;
	float s_var(void);
	float highest();
	void input_stu(void);
	void aver_stu(void);
	void aver_cour(void);
	input_stu();			//�������ã�����10��ѧ���ɼ�
	aver_stu();				//�������ã�����10��ѧ��ƽ���ɼ�
	aver_cour();
	printf("\nNo.cor1 cour2 cour3 cour4 cour5 aver\n");
	for (i = 0; i < N; i++) {
		printf("\n NO %2d", i + 1);		//���һ��ѧ��
		for (j = 0; j < M; j++)
			printf("%8.2f", score[i][j]);		//���һ��ѧ�����ſεĳɼ�
		printf("%8.2f\n", a_stu[i]);			//���һ��ѧ����ƽ���ɼ�
	}
	printf("\naverage:");
	for (j = 0; j < M; j++)
		printf("%8.2f", a_cour[j]);
	printf("\n");
	h = highest();
	printf("highest:%7.2f  No. %2d course %2d\n", h, r, c);
	printf("variance %8.2f\n", s_var());
	system("pause");
	return 0;
}
//����ʮ��ѧ���ɼ��ĺ���
void input_stu(void) {
	int i, j;
	for (i = 0; i < N; i++) {
		printf("\ninput score of student%2d:\n", i + 1);	//ѧ�Ŵ�1��ʼ
		for (j = 0; j < M; j++)
			scanf_s("%f", &score[i][j]);
	}
}
//����ʮ��ѧ��ƽ���ɼ�����
void aver_stu(void) {
	int i, j;
	float s;
	for (i = 0; i < N; i++) {
		for (j = 0,s=0; j < M; j++)
			s += score[i][j];
		a_stu[i] = s / 5.0;
	}
}
//����5�ſε�ƽ���ɼ�
void aver_cour(void) {
	int i, j;
	float s;
	for (j = 0; j < M; j++) {
		s = 0;
		for (i = 0; i < N; i++)
			s += score[i][j];
		a_cour[j] = s / (float)N;
	}
}
//������߷ֺ����������ĸ�ѧ�������ſ�
float highest() {
	float high;
	int i, j;
	high = score[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if (score[i][j] > high) {
				high = score[i][j];
				r = i + 1;		//�����к�i��0��ʼ��ѧ��r��1��ʼ����r=i+1
				c = j + 1;		//�����к�j��0��ʼ���γ�c��1��ʼ����c=j+1
			}
	return(high);
}
//�󷽲�ĺ���
float s_var(void) {
	int i;
	float sumx, sumxn;
	sumx = 0.0;
	sumxn = 0.0;
	for (i = 0; i < N; i++) {
		sumx += a_stu[i] * a_stu[i];
		sumxn += a_stu[i];
	}
	return (sumx / N - (sumxn / N)*(sumxn / N));
}