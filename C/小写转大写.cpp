#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个小写字母\n");							
	scanf("%c", &x);
	printf("该字母的大写是%c",x-32);
	return 0;
}
