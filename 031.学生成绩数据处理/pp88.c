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
	input_stu();			//函数调用，输入10个学生成绩
	aver_stu();				//函数调用，计算10个学生平均成绩
	aver_cour();
	printf("\nNo.cor1 cour2 cour3 cour4 cour5 aver\n");
	for (i = 0; i < N; i++) {
		printf("\n NO %2d", i + 1);		//输出一个学号
		for (j = 0; j < M; j++)
			printf("%8.2f", score[i][j]);		//输出一个学生各门课的成绩
		printf("%8.2f\n", a_stu[i]);			//输出一个学生的平均成绩
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
//输入十个学生成绩的函数
void input_stu(void) {
	int i, j;
	for (i = 0; i < N; i++) {
		printf("\ninput score of student%2d:\n", i + 1);	//学号从1开始
		for (j = 0; j < M; j++)
			scanf_s("%f", &score[i][j]);
	}
}
//计算十个学生平均成绩函数
void aver_stu(void) {
	int i, j;
	float s;
	for (i = 0; i < N; i++) {
		for (j = 0,s=0; j < M; j++)
			s += score[i][j];
		a_stu[i] = s / 5.0;
	}
}
//计算5门课的平均成绩
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
//计算最高分和它所属与哪个学生，哪门课
float highest() {
	float high;
	int i, j;
	high = score[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if (score[i][j] > high) {
				high = score[i][j];
				r = i + 1;		//数组行号i从0开始，学号r从1开始，故r=i+1
				c = j + 1;		//数组列号j从0开始，课程c从1开始，故c=j+1
			}
	return(high);
}
//求方差的函数
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