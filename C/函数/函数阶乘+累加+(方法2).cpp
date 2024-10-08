#include <stdio.h>
int jc(int n)
{
	int i=1,sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}
int jcj(int n)
{
	int sumj=0;
	int i=1;
	for(i=1;i<=n;i++)
	{
		sumj=jc(i)+sumj;
	}
	return sumj;
}
int jcjj(int n)
{
	int sumjj=0;
	int i=1;
	for(i=1;i<=n;i++)
	{
		sumjj=jcj(i)+sumjj;
	}
	return sumjj;
}
int main()
{
	int s;
	scanf("%d",&s);
	printf("%d",jcjj(s));
	return 0;
}
