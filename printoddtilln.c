//printoddtilln.c -> parth patel
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);		
		}
		else
		{
			continue;
	    }
	}
	return 0;
}