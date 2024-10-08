#include<stdio.h>
int main()
{
	int i,j, k,m;
	printf("请输入行数的一半：");
	scanf_s("%d", &k);
	m = k;
	for (i = 1; i <= m; i++)
	{
		for (j = 0; j < m - i; j++)
			printf(" ");
		for (k = 0; k < 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k=0;k<2*m-2*i-1;k++ )
			printf("*");
		printf("\n");
	}
	return 0;
}
