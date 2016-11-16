#include<stdio.h>
int main() {
	struct student
	{
		int num;
		char name[20];
		float score;
	};
		struct student stu[5] = { {10101,"zhang",78},{10103,"wang",98.5},
		{10106,"li",86},{10108,"ling",73.5},{10110,"sun",100} };
		struct student temp;
		const int n = 5;
		int i, j, k;
		printf("the order is:\n");
		for (i = 0; i < n - 1; i++) {
			k = i;
			for (j = i + 1; j < n; j++) {
				if (stu[j].score > stu[k].score) {
					temp = stu[k];
					stu[k] = stu[j];
					stu[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
			printf("%-5d %8s %5.1f\n", stu[i].num, stu[i].name, stu[i].score);
		printf("\n");
		system("pause");
		return 0;
}