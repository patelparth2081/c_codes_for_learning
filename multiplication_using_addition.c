//multiplication_using_addition.c -> parth patel
#include<stdio.h>
int main()
{
	int a,b,i,multiplication=0;
	printf("enter a and b: \n");
	scanf("%d %d",&a,&b);
	if(b<0)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	if(a>=0)
	{
		for(i=1;i<=a;i++)
		{
			multiplication=multiplication+b;
		}
	}
	if(a<0)
	{
		for(i=a;i<=-1;i++)
		{
			multiplication=multiplication-b;
		}
	}
	printf("multiplication = %d",multiplication);
	return 0;
}