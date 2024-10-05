#include<stdio.h>
main()
{
	char c;
	printf("请输入需要加密的英文字符串\n");
	c=getchar();
	printf("加密后为：");
	while(c!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if(c>='X'&&c<='Z'||c>='x'&&c<='z') c=c-23;
			else c=c+3;
		}
		printf("%c",c);
		c=getchar();
	}
	printf("\n");
	return 0;
} 
