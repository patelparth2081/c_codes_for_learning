//reverse.c:- parth patel
#include<stdio.h>
int main()
{
	int n,temp,reverse=0,remainder;
	printf("enter a number: \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	printf("reverse of %d is %d",temp,reverse);
}
