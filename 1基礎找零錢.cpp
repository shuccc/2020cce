#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	printf("50*%d+",n/50);
	printf("5*%d+",n%50/5);
	printf("1*%d",n%50%5/1);
	printf("\n");
}
