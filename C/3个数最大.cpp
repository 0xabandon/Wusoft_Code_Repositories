#include<stdio.h>
int main()
{
	printf("请输入三个数\n");
	int a,b,c;								
	scanf("%d%d%d",&a,&b,&c);
	printf("最大数是%d\n", ((a >= b ?a :b) >= c ?(a >= b ?a :b) :c));
	return 0;
}
