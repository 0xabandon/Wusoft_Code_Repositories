#include<stdio.h>//ͷ�ļ� 
int main()//������ 
{
  int i,j;//������� 
  int temp=0;
  for(i=1;i<5;i++)//forѭ��Ƕ�ף����ѭ������ 
  {
    for(j=1;j<6;j++,temp++)//forѭ��Ƕ�ף����ѭ������ 
    {
      if(temp%5==0)//ÿ5��������һ��
      {
        printf("\n"); 
      } 
      printf("%d\t",i*j);//����� 
    }
  } 
  return 0;//��������ֵΪ0 
}
