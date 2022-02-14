//repeated_digits_in_no.c -> parth patel
#include<stdio.h>
int main()
{
	int n,temp,frequency[9],remainder,i,flag=0;
	printf("enter no: ");
	scanf("%d",&n);
	temp=n;
	for(i=0;i<10;i++)
	{
		frequency[i]=0;
	}
	while(n>0)
	{
		remainder=n%10;
		frequency[remainder]++;
		n=n/10;
	}
	for(i=0;i<10;i++)
	{
		if(frequency[i]>1)
		{
			flag=1;
			printf("%d --> repeated %d times\n",i,frequency[i]);
		}
	}
	if(flag==0)
	{
		printf("no repeated digits\n");
	}
	else
	{
		printf("repeated digits are there");
	}
}