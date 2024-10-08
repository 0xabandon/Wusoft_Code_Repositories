#include<stdio.h>
int i= 0;
void move(int n, char a, char c)
{
    i++;
    printf("第%d次移动圆盘%d：%c->%c\n",i,n,a,c);
}

void hanoi(int n,char a,char b,char c)
{
    if (n == 1)
    {
        move(n, a, c);
    }
    else
    {
        hanoi(n-1,a,c,b);
        move(n, a, c);
        hanoi(n - 1,b, a, c);
    }
}

int main()
{
    int n = 0;
    printf("汉诺塔的层数:");
    scanf(" %d", &n);
    hanoi(n,'A','B','C');
    return 0;
}
