#include<stdio.h>
int main()
{
	int n,jc=1,i=1;
	printf("����������Ľ׳�");
	scanf("%d",&n);
	do
	{
		jc=jc*i;
		i++;
	}
	while(i<=n);
	printf("�׳˽��Ϊ��%d\n",jc);
	return 0;
}
