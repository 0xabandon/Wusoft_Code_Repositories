#include<stdio.h>
int main()
{
	int n,a3;
	printf("请输入n=");
	scanf("%d",&n);
	for(int i=1,a1=1,a2=1;i<=n-2;i++)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	if(n<=2)
	{
		a3=1;
	}
	printf("兔子有%d只",a3);
	return 0;		
}
