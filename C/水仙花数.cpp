#include <stdio.h>
main()
{
  int i,j,k,n;
  printf("ˮ�ɻ�����:");
  for(n=100;n<1000;n++)
  {	
  	i=n/100;/*�ֽ����λ*/
    j=n/10%10;/*�ֽ��ʮλ*/
    k=n%10;/*�ֽ����λ*/
    if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
      printf("%-5d",n);
  }
  return 0; 
}
