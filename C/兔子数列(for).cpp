#include<stdio.h>
int main()
{
	int n,a3;
	printf("ÇëÊäÈën=");
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
	printf("ÍÃ×ÓÓÐ%dÖ»",a3);
	return 0;		
}
