#include <stdio.h>
int qh(int num) 
{
	if (num==0) 
	{
		return 0;
	}
	return (num%10)+qh(num/10);
}
int main() 
{
	int number;
	printf("请输入一个四位数: ");
	scanf("%d", &number);
	int sum=qh(number);
	printf("每位数字之和为: %d\n", sum);
	return 0;
}
