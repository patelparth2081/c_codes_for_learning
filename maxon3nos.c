//maxon3nos.c -> parth patel
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers: \n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b) && (a>c))
	{
		printf("%d is bigger than %d and %d",a,b,c);
	}
	else if((b>a) && (b>c))
	{
		printf("%d is bigger than %d and %d",b,a,c);
	}
	else if((c>a) && (c>b))
	{
		printf("%d is bigger than %d and %d",c,a,b);
	}
	else 
	{
		printf("all are same");
	}
	return 0;
}