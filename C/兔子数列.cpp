#include<stdio.h>
int main()
{
	int n;
	printf("请输入n=");
	scanf("%d",&n);
	int a1=1,a2=1,a3,i=1;
	while(i<=n-2)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;                                   
		i++;
	}
	if(n<=2)
	{
		a3=1;
	}
	printf("兔子有%d只",a3);
	return 0;	
}
