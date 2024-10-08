#include <stdio.h>
int main()
{
	int a1=1,a2=1;
	int a3,n;
	int i=1;
	printf("请输入第几项：");
	scanf("%d",&n);
	while(i<=n-2)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		i++;
	}
	printf("%d",a3);
	return 0;
}
