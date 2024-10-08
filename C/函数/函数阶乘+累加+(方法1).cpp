#include<stdio.h>
int jc(int x)
{
	int jg=1;
	for(int i=1;i<=x;i++)
	jg*=i;
	return jg;
}
int jch(int y)
{
	int sum=0;
	for(int i=1;i<=y;i++)
	sum+=jc(i);
	return sum;
}
int jchh(int z)
{
	int sum=0;
	for(int i=1;i<=z;i++)
	sum+=jch(i);
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",jchh(n));
}
