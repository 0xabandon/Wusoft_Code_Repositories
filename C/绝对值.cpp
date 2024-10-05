#include<stdio.h>
int main(void) {
	int a;
	printf("Please enter a number:");
	scanf("%d",&a);
	if (a>0) 
	{
		printf("%d",a);
	}
	if(a==0) 
	{
		a=0;
		printf("%d",a);
	}
	if(a<0) 
	{
		a=(-1*a);
		printf("%d",a);
	}
	return 0;
}
