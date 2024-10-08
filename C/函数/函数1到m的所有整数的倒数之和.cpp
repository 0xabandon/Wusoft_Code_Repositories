#include<stdio.h>
double fun(int m)
{
	double t=1.0;
	int i;
	for(int i=2;i<=m;i++)
	{
		int k=i;
		t+=1.0/k;
		
	}
	return t;
}

main()
{
	int m;
	scanf("%d",&m);
	printf("%lf\n",fun(m));
}
