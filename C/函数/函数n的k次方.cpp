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
    printf("������n��ֵ��");
    scanf("%d", &n);
    printf("������k��ֵ��");
    scanf("%d", &k);
    printf("%d��%d�η���%d\n", n, k, power(n, k));
    return 0;
}
