#include<stdio.h>
#include<string.h>
void insertof(char s[100],int point,char t[100])
{
	int slen=strlen(s);
	int tlen=strlen(t);
	for(int i=slen-1;i<=point-1;i--)
	{
		s[i+tlen]=s[i];
	}
	for(int j=0;j<=tlen-1;j++)
	{
		s[j+point]=t[j];
	}
	s[slen+tlen+1]='\0';
	printf("%s",s);
}
main()
{
	char a[100];
	char b[100];
	int n;
	printf("依次输入原字符串，位数，插入内容\n");
	scanf("%s",a);
	scanf("%d",&n);
	scanf("%s",b);
	insertof(a,n,b);
	return 0;
}
