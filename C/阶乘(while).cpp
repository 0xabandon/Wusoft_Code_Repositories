#include<stdio.h>
main()
{
    int i=1,a=1,n;
    printf("请输入所求的阶乘：");
    scanf("%d",&n);
    while(i<=n)  
    {
    	a=a*i;
        i++;                                      
    }
    printf("阶乘结果为：%d",a);
    return 0;
}
