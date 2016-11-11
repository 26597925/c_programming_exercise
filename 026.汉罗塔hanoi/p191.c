#include<stdio.h>
int main() {
	void hanoi(int n, char one, char two, char three);
	int m;
	printf("please intput the number of diskes:\n");
	scanf_s("%d", &m);
	printf("the step to move %d diskes:\n", m);
	hanoi(m, 'A', 'B', 'C');
	system("pause");
	//return 0;
}
void hanoi(int n, char one, char two, char three) {
	//将n个盘从one座借助到two座移动到three座
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void move(char x, char y) {			//定义move函数
	printf("%c-->%c\n", x, y);
}
