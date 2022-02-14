//armstrong no

#include<stdio.h>
int main()
{
	int n,sum=0,remainder,temp=0;
	printf("enter the no : \n");
	scanf("%d",&n);
	temp = n;
	while(n > 0)
	{
		remainder = n % 10;
		sum = sum + remainder * remainder * remainder;
		n = n / 10;
	}
	if(temp == sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}