#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student {
	long num;
	float score;
	struct student *next;
};
int n;
struct student *creat() {
	struct student *head;
	struct student *p1, *p2;
	n = 0;
	p1 = p2 = (struct student *)malloc(LEN);
	scanf("%ld %f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0) {
		n = n + 1;
		if (n == 1)head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(LEN);
		scanf("%ld %f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}
void print(struct student *head) {
	struct student *p;
	printf("\nNow,these %d records are:\n", n);
	p = head;
	if (head != 0)
		do {
			printf("%ld %5.1f\n", p->num, p->score);
			p = p->next;
		} while (p != NULL);

}
void main() {
	struct student *head;
	head = creat();
	print(head);
	system("pause");
}