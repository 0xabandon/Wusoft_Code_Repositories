#include <stdio.h>
int main()
{
	int asz=0,bsz=0,csz=0,dsz=0,esz=0;
	char ch;
	printf("��������룺\n");
    while ((ch = getchar()) != '\n')
	{
		if(ch>='A'&&ch<='Z') asz++;
		else
		if(ch>='a'&&ch<='z') bsz++;
		else
		if(ch==' ') csz++;
		else
		if(ch>='0'&&ch<='9') esz++;
		else
		dsz++;
	}
	printf("��д�ַ�������%d\n",asz);
	printf("Сд�ַ�������%d\n",bsz);
	printf("�ո��ַ�������%d\n",csz);
	printf("�����ַ�������%d\n",esz);
	printf("�����ַ�������%d\n",dsz);
	return 0;
}
