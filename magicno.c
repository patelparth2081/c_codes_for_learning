//magicno.c --> parth patel
#include<stdio.h>
int get_sum_of_digits(int n)
{
	int sum=0,x;
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	return sum;
}
int get_reverse_of_number(int n)
{
	int rev=0,x;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	return rev;
}
int main()
{
	int n,sum_of_digits;
	int reverse_of_number; 
	printf("enter no: ");
	scanf("%d",&n);
	sum_of_digits=get_sum_of_digits(n);
	reverse_of_number=get_reverse_of_number(sum_of_digits);
	if(sum_of_digits*reverse_of_number==n)
	{
		printf("magic no");
	}
	else
	{
		printf("not magic no");
	}
	return 0;
}