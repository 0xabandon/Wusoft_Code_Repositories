#include <stdio.h>
int main() 
{
  int i, j;
  int line = 0;
  printf("ÇëÊäÈëĞĞÊı£º");
  scanf("%d", &line);
  for (i = 0; i < line; i++) 
  {
    for (j = 0; j <= i + line - 1; j++) 
	{
      if (i + j >= line - 1)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}
