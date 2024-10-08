#include <stdio.h>
int main()
{
	int a1=1,a2=1,i=1;
	int a3,n;
	printf("请输入第几项：");
	scanf("%d",&n);
	for( ;i<=n;i++ )
	{
		a3=a1+a2;
		printf("%d\n",a1);
		a1=a2;
		a2=a3;
	}
	return 0;
}
