//factorial.c:- parth patel
#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("enter a number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial = factorial * i;
	}
	printf("%d!=%d\n",n,factorial);
	return 0;
}