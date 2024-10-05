#include<stdio.h>
int main()
{
	int a=0,b=1,c=1;				
	for (int i=1;i<=20;i++)
	{
	    printf("%5d",c);
	    if(i%5==0) 
        printf("\n");
	    c=a+b;
	    a=b;
	    b=c;
	}
	return 0;
}
