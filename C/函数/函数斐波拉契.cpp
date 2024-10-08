#include <stdio.h>
int fblq(int k)
{
	if(k==1)
	{
		return 1;
	}
	else if(k==2)
	{
		return 1;
	}
	else
	{
		return fblq(k-1)+fblq(k-2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fblq(n));
	return 0;
}
