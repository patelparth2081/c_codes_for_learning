//gross_salary_from_basic_pay.c -> parth patel
#include<stdio.h>
int main()
{
	float basicpay,dearnessallowance,houserentallowance,grosssalary;
	float providentfund;
	printf("ënter basic pay: \n");
	scanf("%f",&basicpay);
	houserentallowance=0.2*basicpay;
	dearnessallowance=0.4*basicpay;
	providentfund=0.12*basicpay;
	grosssalary=basicpay+dearnessallowance+houserentallowance+providentfund;
	printf(" basic pay         :%f \n",basicpay);
	printf(" dearnessallowance :%f \n",dearnessallowance);
	printf(" houserentallowance:%f \n",houserentallowance);
	printf(" providentfund     :%f \n",providentfund);
	printf(" grosssalary       :%f \n",grosssalary);
	return 0;
}