//armstrong.c:- parth patel
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
		sum=sum+(remainder*remainder*remainder);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}