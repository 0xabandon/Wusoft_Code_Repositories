#include<stdio.h>
int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			for(int k=0;k<=9;k++)
			{
				int a=i*100+j*10+k;
				if(a>=100&&a<=999&&a==i*i*i+j*j*j+k*k*k)
				{
					printf("%d\n",a);
				}
			}
		}
	}	
	return 0;		
}
