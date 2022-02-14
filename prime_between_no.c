//prime_between_no.c:- parth patel
#include<stdio.h>
int main()
{
	int n,i,count=0,j;
	printf("enter a number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{    
        count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
		
    }
}
