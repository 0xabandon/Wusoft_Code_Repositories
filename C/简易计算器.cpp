#include<stdio.h>
main()
{
	float a,b,c;
	char z;
	printf("输入式子:");
	scanf("%f%c%f",&a,&z,&b);
	switch(z)
	{
		case'+':c=a+b;printf("%f",c);break;
		case'-':c=a-b;printf("%f",c);break;
		case'*':c=a*b;printf("%f",c);break;
		case'/':if(b==0)//除数不能为零
		        {
					printf("错误");break;
				}
		        else
		        {
					c=a/b;printf("%f",c);break;
		        } 
		default:printf("式子有误");break;
	}
	return 0;
}
