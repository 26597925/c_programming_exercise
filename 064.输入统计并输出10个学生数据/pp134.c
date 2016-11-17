#include<stdio.h>
#define N 10
int maxi = 0;
float sum, max = 0, average = 0;
struct student
{
	char num[6];
	char name[8];
	float score[3];
	float avr;
}stu[N];
int main() {
	
	void input(struct student stu[]);
	void print(struct student stu[]);
	void  domath(struct student stu[]);
	input(stu);
	domath(stu);
	print(stu);

	system("pause");
	return 0;
}
//输入数据
void input(struct student stu[]) {
	for (int i = 0; i < N; i++) {
		printf("please input the information of student%d :\n",i+1);
		printf("NO. :");
		scanf("%s", stu[i].num);
		printf("name: ");
		scanf("%s", stu[i].name);
		for (int j = 0; j < 3; j++) {
			printf("score%d: ", j + 1);
			scanf("%f", &stu[i].score[j]);
		}
	}
}
//输出数据
void print(struct student stu[]) {
	void domath(struct student stu[]);
	printf("N0.   name   score1  score2  score3   average\n");
	for (int i = 0; i < N; i++) {
		printf("%-5s%5s", stu[i].num, stu[i].name);
		for (int j = 0; j < 3; j++) 
			printf("%8.2f", stu[i].score[j]);
			printf("%10.3f\n", stu[i].avr);
	}
	printf("average=%7.3f\n", average);
	printf("the highest score is: student %s,%s\n", stu[maxi].num, stu[maxi].name);
	printf("his score are:%6.2f,%6.2f,%6.2f,average:%5.2f.\n",
		stu[maxi].score[0], stu[maxi].score[1], stu[maxi].score[2], stu[maxi].avr);
}
//计算
void  domath(struct student stu[]) {
	
	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += stu[i].score[j];
		}
		stu[i].avr = sum / 3.0;
		average += stu[i].avr;
		if (sum > max) {
			max = sum;
			maxi = i;
		}
	}
	average /= N;

}