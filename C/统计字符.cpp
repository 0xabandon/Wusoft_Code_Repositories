#include <stdio.h>
int main()
{
	int asz=0,bsz=0,csz=0,dsz=0,esz=0;
	char ch;
	printf("请随便输入：\n");
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
	printf("大写字符个数：%d\n",asz);
	printf("小写字符个数：%d\n",bsz);
	printf("空格字符个数：%d\n",csz);
	printf("数字字符个数：%d\n",esz);
	printf("其他字符个数：%d\n",dsz);
	return 0;
}
