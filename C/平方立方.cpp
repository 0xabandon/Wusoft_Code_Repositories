#include<stdio.h>
int main()
{
	int i,n,sum,c;
	printf("请输入：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=i*i;
	}
		printf("平方=%d\n",sum);
	for(i=1;i<=n;i++)
	{
		 c=i*i*i;
	} 
	printf("立方=%d\n",c);
	return 0;
}
