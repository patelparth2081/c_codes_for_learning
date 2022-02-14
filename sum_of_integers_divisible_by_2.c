//sum_of_integers_divisible_by_2_numbers.c:- parth patel
#include<stdio.h>
int main()
{
	int n1,n2,i,sum=0;
	printf("enter a number: \n");
	scanf("%d",&n1);
	printf("enter a number: \n");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
			sum = sum + i;
	}
	printf("sum of all integers divisible by 2 between %d and %d is%d",n1,n2,sum);
}