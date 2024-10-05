#include<stdio.h>
int main()
{
	int n,jc=1,i=1;
	printf("请输入所求的阶乘");
	scanf("%d",&n);
	do
	{
		jc=jc*i;
		i++;
	}
	while(i<=n);
	printf("阶乘结果为：%d\n",jc);
	return 0;
}
