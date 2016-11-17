#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct student)
struct student
{
	long num;
	float score;
	struct student *next;
};
int n;
int main() {
	struct student *creat(); //函数声明
	struct student *del(struct student *head, long num);//函数声明
	struct student *insert(struct student *head, struct student *stud);//函数声明
	void print(struct student *head); //函数声明
	struct student *head, *stu;
	long del_num;
	printf("input records:\n");		//提示输入数据
	head = creat();					//建立链表返回头指针
	print(head);					//输出 全部节点
	printf("\ninput the delete number:");		//提示用户要删除的节点
	scanf("%ld", &del_num);						//输入要输出的学号
	while (del_num != 0) {						//当输入的学号为0时结束循环
		head = del(head, del_num);				//删除节点返回链表的头地址
		print(head);							//输出全部节点
		printf("input the deleted number:");	//提示用户要删除的节点
		scanf("%ld", &del_num);					//提示要删除的学号
	}
	printf("\ninput the insert record:");		//提示用户要插入的节点
	stu = (struct student *)malloc(LEN);		//开辟一个新节点
	scanf("%ld %f", &stu->num, &stu->score);	//输入要插入的节点
	while (stu->num != 0) {						//当插入的学号为0时结束循环
		head = insert(head, stu);				//返回链表的头地址，赋给head
		print(head);							//输出全部节点
		printf("input the insert record:");		//请用户输入要插入的节点
		stu = (struct student *)malloc(LEN);	//开辟一个新节点
		scanf("%ld %f", &stu->num, &stu->score);//输入插入节点数据
	}
	system("pause");
	return 0;
}
//建立链表
struct student *creat() {
	struct student *head;
	struct student *p1, *p2;
	n = 0;
	p1 = p2 = (struct student*)malloc(LEN);		//开辟一个新单元，使p1,p2指向他
	scanf("%ld %f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0) {
		n = n + 1;
		if (n == 1)head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct student*)malloc(LEN);
		scanf("%ld %f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}
//删除结点的函数
struct student *del(struct student *head, long num) {
	struct student *p1, *p2;
	if (head == NULL) {					//当表为空表时
		printf("\nlist null!\n");
		return head;
	}
	p1 = head;			//使p1指向第一个节点
		while (num!=p1->num&&p1->next!=NULL)	//p1指向的不是所要找的节点且后面还有节点
		{
			p2 = p1; p1 = p1->next;		//p1指向后一个节点
		}
		if (num == p1->num) {		//找到了
			if (p1 == head)head = p1->next;	//当p1指向的是首节点，把第二个节点地址赋予head
			else p2->next = p1->next;		//否则将下一个节点的首地址赋给前一个节点地址
			printf("delete:%ld\n", num);
			n = n - 1;
		}
		else
			printf("%ld not been found! \n", num);	//找不到该节点
		return head;
}
//插入节点函数
struct student *insert(struct student *head, struct student *stud) {
	struct student *p0, *p1, *p2;
	p1 = head;		//使p1指向第一个节点
	p0 = stud;		//指向要插入的节点
	if(head==NULL)	//原来的链表是空链表
	{
		head = p0; p0->next = NULL;		//使p0指向的节点作为头节点
	}
	else {
		while ((p0->num > p1->num) && (p1->next != NULL)) {		
			p2 = p1;		//使p2指向刚才p1指向的结点
			p1 = p1->next;	//p1后移一个节点
		}
		if (p0->num <= p1->num) {
			if (head == p1)head = p0;	//指向原来第1个节点之前
			else
				p2->next = p0;		//插到p2指向的节点之后
			p0->next = p1;
		}
		else {
			p1->next = p0;
			p0->next = NULL;		//插到最后节点之后
		}
	}
	n = n + 1;		//节点数加一
	return head;
}
//输出链表的函数
void print(struct student *head) {
	struct student *p;
	printf("\nNow,these %d records are: \n", n);
	p = head;
	if(head!=NULL)
		do {
			printf("%ld %5.1f\n", p->num, p->score);
			p = p->next;
		} while (p != NULL);
}