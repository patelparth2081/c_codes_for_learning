//fibbonacci.c:- parth patel
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,count;
	printf("enter a number: ");
	scanf("%d",&n);
	printf("%d \n%d\n",a,b);
	
	while(count<n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		count++;
	}
	return 0;
}