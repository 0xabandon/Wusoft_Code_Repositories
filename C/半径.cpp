#include<stdio.h>
#include<math.h>
int main()
{
	double r;
	printf("请输入半径\n");							
	scanf("%lf", &r);
	printf("该圆面积为%lf",r*r*3.14159);
	return 0;
}
