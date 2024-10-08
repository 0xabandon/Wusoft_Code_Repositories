#include <stdio.h>
int power(int n, int k) 
{
    if (k==0) 
	{
        return 1;
    } 
	else 
	{
        return n*power(n, k-1);
    }
}
int main() 
{
    int n, k;
    printf("请输入n的值：");
    scanf("%d", &n);
    printf("请输入k的值：");
    scanf("%d", &k);
    printf("%d的%d次方是%d\n", n, k, power(n, k));
    return 0;
}
