#include<stdio.h>
main()
{
	float sco;
	printf("请输入你的成绩："); 
	scanf("%f",&sco);
	switch(int(sco/10))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("不及格");break;
		case 6:
		case 7:
			printf("及格");break;
		case 8:
		case 9:
			printf("良好");break;
		case 10:
			printf("优秀");break;
		default:
			printf("成绩有误，重新输入");break; 
	}
	return 0;		
}
