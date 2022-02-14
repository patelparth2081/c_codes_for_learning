//sum_of_n_numbers.c:- parth patel
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a number: \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("%d",sum);
}
