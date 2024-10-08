#include <stdio.h>
void move(int n, char A, char B, char C) 
{
	if (n == 1) 
	{
		printf("plate %d : %c -> %c\n",n, A, C);
		return;
	}
	move(n - 1, A, C, B);
	printf("plate %d : %c -> %c\n", n, A, C);
	move(n - 1, B ,A, C);
}

int main() 
{
	int n;
	scanf("%d", &n);
	move(n, 'A', 'B', 'C');
	return 0;
}
