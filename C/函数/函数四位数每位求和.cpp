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
	printf("������һ����λ��: ");
	scanf("%d", &number);
	int sum=qh(number);
	printf("ÿλ����֮��Ϊ: %d\n", sum);
	return 0;
}
