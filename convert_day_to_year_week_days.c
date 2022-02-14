//convert_day_to_year_week_days.c -> parth patel
#include<stdio.h>
int main()
{
	int n,years,weeks,days;
	printf("enter no of days: \n");
	scanf("%d",&n);
	years=n/365;
	weeks=(n%365)/7;
	days=(n%365)%7;
	printf("%d =%d years ,%d weeks ,%d days \n",n,years,weeks,days);
	
	return 0;
}