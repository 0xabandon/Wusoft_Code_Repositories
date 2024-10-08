#include<stdio.h>
#include<math.h>
int main(void) 
{
	float a,b,c,s;
	scanf("%f%f%f",&a,&b,&c);
	printf("Input a,b,c:");
	if (a+b>c&&a+c>b&&b+c>a) 
	{
		s=0.5*(a+b+c);
		printf("s=%f",s);
	} else 
	{
		printf("该三角形不存在");
	}
	return 0;
}
