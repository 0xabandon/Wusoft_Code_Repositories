#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("1到100之间奇数和为：%d",sum);
	return 0;	
}
