//oddeven.c -> parth patel
#include<stdio.h>
int main()
{
	int i;
	printf("enter number: \n");
	scanf("%d",&i);
	if(i==0)
	{
		printf("0 is neither even nor odd.");
	}
	else
	{
		if(i%2==0)
		{
			printf("even no");
		}
		else
		{
			printf("odd no");	
		}
	}
	return 0;
}