#include<stdio.h>
void z(int x){
	for(int i=1;i<=x;i++){
		for(int j=1;j<=x-i;j++)
		printf(" ");
		for(int k=1;k<=2*i-1;k++)
		printf("*");
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	z(n);
}
