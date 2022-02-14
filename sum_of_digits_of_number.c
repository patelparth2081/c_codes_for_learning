//sum_of_digits_of_number.c:- parth patel
#include<stdio.h>
int main()
{
	int n,temp,sum=0,remainder;
	printf("enter a number: \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf("sum of digits of %d is %d",temp,sum);
}
