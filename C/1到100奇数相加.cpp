#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("1��100֮��������Ϊ��%d",sum);
	return 0;	
}
