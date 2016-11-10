#include<stdio.h>
int main()
{
	char c;
	int letters = 0, space = 0, digit = 0, other = 0;
	printf_s("please intput somethings:\n");
	c = getchar();
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
			letters++;
		else if (c == ' ')
			space++;
		else if (c >= '0'&&c <= '9')
			digit++;
		else
			other++;
	}
	printf("字母数为：%d\n 空格数为:%d\n 数字数为：%d\n 其他字符输为：%d\n", letters, space, digit, other);
	return 0;
}