#include<stdio.h>
#define N 10
struct student
{
	char num[6];
	char name[8];
	float score[3];
	float avr;
}stu[N];
int main() {
	void input(struct student[]);
	void print(struct student[]);
	void  dodo(struct student[]);
	input(stu);
	dodo(stu);
	print(stu);

	system("pause");
	return 0;
}
void input(struct student[]) {

}
void print(struct student[]) {

}
void  dodo(struct student[]) {

}