#include<stdio.h>//头文件 
int main()//主函数 
{
  int i,j;//定义变量 
  int temp=0;
  for(i=1;i<5;i++)//for循环嵌套，外层循环做行 
  {
    for(j=1;j<6;j++,temp++)//for循环嵌套，外层循环做列 
    {
      if(temp%5==0)//每5个数进行一下
      {
        printf("\n"); 
      } 
      printf("%d\t",i*j);//输出数 
    }
  } 
  return 0;//函数返回值为0 
}
