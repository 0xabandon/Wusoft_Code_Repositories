#include<stdio.h>
int main()
{
	int sco[]={2,6,3,7,9,5,1,9,4,0};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-1-i;j++)
		{
			if(sco[j]>sco[j+1])
			{
				int t=sco[j];
				sco[j]=sco[j+1];
				sco[j+1]=t;
			}
		}
	}
	for(int i=0;i<9;i++)
		printf("%d\t",sco[i]);
	return 0;
}
