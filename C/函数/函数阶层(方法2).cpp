#include<stdio.h>
long Fact(int n);
int main(void)
{
	int m;
	long ret;
	printf("Input m:");
	scanf("&d",&m);
	ret=Fact(m);
	printf("%d!=%1d\n",m,ret);
	return 0;
}
long Fact(int n)
{
	int i;
	long result=1;
	if(n<0)   
    {
    	printf("Input data error!\n");
	 } 
	 else
	 {
	 	for(i=2;i<=n;i++)
	 	  result *=i;
		   return result; 
	 }
 } 
