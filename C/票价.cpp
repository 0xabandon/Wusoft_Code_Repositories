#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("�����밴1���ﶬ�밴2\n");
	scanf("%d",&b);
	if(b==1){c=50;}
	else if(b==2){c=30;}
    printf("����������\n");
	scanf("%d",&a);
	if(a<=6){d=0.5*c;}
	else if(a>=60){d=0;}
	else{d=c;}
	printf("%dԪ",d);
	return 0;
}
