#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,t;
	printf("请输入四个数\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if(a>=b){t=a,a=b,b=t;}
	if(a>=c){t=a,a=c,c=t;}
	if(a>=d){t=a,a=d,d=t;}
	if(b>=c){t=b,b=c,c=t;}
	if(b>=d){t=b,b=d,d=t;}
	if(c>=d){t=c,c=d,d=t;}
	printf("%6.2f,%6.2f,%6.2f,%6.2f\t",a,b,c,d);
	return 0;
}
