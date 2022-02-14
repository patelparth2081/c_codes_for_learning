//kite.c --> parth patel
#include <stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
	
	printf("\n");
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=4-i;j++)
		{
			printf(" *");
		}
		printf("\n"); 		
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n"); 
		
	}
	printf("C PROGRAMMABLE KITE");
}