#include<stdio.h>
int main()
{
	printf("��������λ��\n");
	int a;								
	scanf("%d",&a);
	printf("��λ��%d\n",a%10);
	printf("ʮλ��%d\n",a/10%10);
	printf("��λ��%d\n",a/100%10);
	printf("ǧλ��%d\n",a/1000);
	return 0;
}
