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
	struct student *creat(); //��������
	struct student *del(struct student *head, long num);//��������
	struct student *insert(struct student *head, struct student *stud);//��������
	void print(struct student *head); //��������
	struct student *head, *stu;
	long del_num;
	printf("input records:\n");		//��ʾ��������
	head = creat();					//����������ͷָ��
	print(head);					//��� ȫ���ڵ�
	printf("\ninput the delete number:");		//��ʾ�û�Ҫɾ���Ľڵ�
	scanf("%ld", &del_num);						//����Ҫ�����ѧ��
	while (del_num != 0) {						//�������ѧ��Ϊ0ʱ����ѭ��
		head = del(head, del_num);				//ɾ���ڵ㷵�������ͷ��ַ
		print(head);							//���ȫ���ڵ�
		printf("input the deleted number:");	//��ʾ�û�Ҫɾ���Ľڵ�
		scanf("%ld", &del_num);					//��ʾҪɾ����ѧ��
	}
	printf("\ninput the insert record:");		//��ʾ�û�Ҫ����Ľڵ�
	stu = (struct student *)malloc(LEN);		//����һ���½ڵ�
	scanf("%ld %f", &stu->num, &stu->score);	//����Ҫ����Ľڵ�
	while (stu->num != 0) {						//�������ѧ��Ϊ0ʱ����ѭ��
		head = insert(head, stu);				//���������ͷ��ַ������head
		print(head);							//���ȫ���ڵ�
		printf("input the insert record:");		//���û�����Ҫ����Ľڵ�
		stu = (struct student *)malloc(LEN);	//����һ���½ڵ�
		scanf("%ld %f", &stu->num, &stu->score);//�������ڵ�����
	}
	system("pause");
	return 0;
}
//��������
struct student *creat() {
	struct student *head;
	struct student *p1, *p2;
	n = 0;
	p1 = p2 = (struct student*)malloc(LEN);		//����һ���µ�Ԫ��ʹp1,p2ָ����
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
//ɾ�����ĺ���
struct student *del(struct student *head, long num) {
	struct student *p1, *p2;
	if (head == NULL) {					//����Ϊ�ձ�ʱ
		printf("\nlist null!\n");
		return head;
	}
	p1 = head;			//ʹp1ָ���һ���ڵ�
		while (num!=p1->num&&p1->next!=NULL)	//p1ָ��Ĳ�����Ҫ�ҵĽڵ��Һ��滹�нڵ�
		{
			p2 = p1; p1 = p1->next;		//p1ָ���һ���ڵ�
		}
		if (num == p1->num) {		//�ҵ���
			if (p1 == head)head = p1->next;	//��p1ָ������׽ڵ㣬�ѵڶ����ڵ��ַ����head
			else p2->next = p1->next;		//������һ���ڵ���׵�ַ����ǰһ���ڵ��ַ
			printf("delete:%ld\n", num);
			n = n - 1;
		}
		else
			printf("%ld not been found! \n", num);	//�Ҳ����ýڵ�
		return head;
}
//����ڵ㺯��
struct student *insert(struct student *head, struct student *stud) {
	struct student *p0, *p1, *p2;
	p1 = head;		//ʹp1ָ���һ���ڵ�
	p0 = stud;		//ָ��Ҫ����Ľڵ�
	if(head==NULL)	//ԭ���������ǿ�����
	{
		head = p0; p0->next = NULL;		//ʹp0ָ��Ľڵ���Ϊͷ�ڵ�
	}
	else {
		while ((p0->num > p1->num) && (p1->next != NULL)) {		
			p2 = p1;		//ʹp2ָ��ղ�p1ָ��Ľ��
			p1 = p1->next;	//p1����һ���ڵ�
		}
		if (p0->num <= p1->num) {
			if (head == p1)head = p0;	//ָ��ԭ����1���ڵ�֮ǰ
			else
				p2->next = p0;		//�嵽p2ָ��Ľڵ�֮��
			p0->next = p1;
		}
		else {
			p1->next = p0;
			p0->next = NULL;		//�嵽���ڵ�֮��
		}
	}
	n = n + 1;		//�ڵ�����һ
	return head;
}
//�������ĺ���
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