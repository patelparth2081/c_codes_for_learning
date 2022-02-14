//palindrome.c:- parth patel
#include<stdio.h>
int main()
{
	int n,temp,palindrome=0,remainder;
	printf("enter a number: \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		remainder=n%10;
		palindrome=palindrome*10+remainder;
		n=n/10;
	}
	if(temp==palindrome)
	{
		printf("palindrome number");
	}
	else
	{
		printf("not palindrome number");
	}
}