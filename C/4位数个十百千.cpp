#include<stdio.h>
int main()
{
	printf("请输入四位数\n");
	int a;								
	scanf("%d",&a);
	printf("个位是%d\n",a%10);
	printf("十位是%d\n",a/10%10);
	printf("百位是%d\n",a/100%10);
	printf("千位是%d\n",a/1000);
	return 0;
}
