//swapwithouttemp.c -> parth patel
#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("before swap a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap a=%d b=%d",a,b);
	
	return 0;
}