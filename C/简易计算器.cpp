#include<stdio.h>
main()
{
	float a,b,c;
	char z;
	printf("����ʽ��:");
	scanf("%f%c%f",&a,&z,&b);
	switch(z)
	{
		case'+':c=a+b;printf("%f",c);break;
		case'-':c=a-b;printf("%f",c);break;
		case'*':c=a*b;printf("%f",c);break;
		case'/':if(b==0)//��������Ϊ��
		        {
					printf("����");break;
				}
		        else
		        {
					c=a/b;printf("%f",c);break;
		        } 
		default:printf("ʽ������");break;
	}
	return 0;
}
