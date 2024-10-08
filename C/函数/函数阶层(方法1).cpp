#include <stdio.h>
int jc(int k)
{
	if(k==1)
	{
		return 1;
	}
	else
	{
		return jc(k-1)*k;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",jc(n));
	return 0;
}
