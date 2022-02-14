//print_company_bonus_on_salary.c -> parth patel
/*a company decides to give bonus to all all its employees on new year.
  a 5% bonus on salary is given to male 
  a 10% bonus on salary is given to female
  :- write c program to enter salary and gender of employees.
     if salary  of employee less than 10000 then employee gets extra 2% bonus on salary
     calculate bonus that given to employee and display the salary employee will get.	 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	float salary,bonus;
	char gender;
	printf("enter M for male and F for female: \n");
	scanf("%c",&gender);
	printf("enter salary: \n");
	scanf("%f",&salary);
	if(gender=='M' || gender=='m')
	{
		if(salary>10000)
		{
			bonus = (float)(salary*0.05);
		}
		else
		{
			bonus = (float)(salary*0.07);
		}
	}
	if(gender=='F' || gender=='f')
	{
		if(salary>10000)
		{
			bonus = (float)(salary*0.1);
		}
		else
		{
			bonus = (float)(salary*0.12);
		}
	}
	salary += bonus;
	printf("bonus =%f\n salary=%f\n",bonus,salary);
	return 0;
}