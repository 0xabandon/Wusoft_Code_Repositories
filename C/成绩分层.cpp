#include<stdio.h>
main()
{
	float sco;
	printf("��������ĳɼ���"); 
	scanf("%f",&sco);
	switch(int(sco/10))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������");break;
		case 6:
		case 7:
			printf("����");break;
		case 8:
		case 9:
			printf("����");break;
		case 10:
			printf("����");break;
		default:
			printf("�ɼ�������������");break; 
	}
	return 0;		
}
