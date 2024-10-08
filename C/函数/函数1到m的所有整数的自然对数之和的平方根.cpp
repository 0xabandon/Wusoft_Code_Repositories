#include<math.h>
#include<stdio.h>
double fun (int m)
{
	double sum=0.0;
	for(int i=1;i<=m;i++)
	{
		sum+=log(i);
	}
	double result=sqrt(sum);
	return result;
}

main()
{
	printf("%lf\n",fun(20));
}
