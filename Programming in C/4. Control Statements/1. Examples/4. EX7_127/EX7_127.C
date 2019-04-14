//***********************************************************************************************
//Problem Statment: Suppose c code has to be written that will calculate the earnings by wokers who
//					who are paid an hourly wage, with weekly hours greater than being paid "time 
//					and a half. Suppose weekly hours rate are known in the program.
//Page : 127
//Aurthor : Ashwini kumar
//Date : 14.04.19
//*************************************************************************************************

//MACRO DEFINITION
#define WEEKLY_HOURS 40U
#define EXTRA_HOUR_RATE 1.5
#define HOURLY_WAGE 10u
#define	MAX_HOURS_WORKED 148u //24IN
#define	MIN_HOURS_WORKED 0u
#define TRUE 1u
#define FALSE 0
#define WEEKLY_WAGE (10*40)
#define EXTRA_HOUR_WAGE 15u

//Header files
#include<stdio.h>

//Global variables


//Function prototype
static unsigned int getInput(void);
static unsigned int calculateSalary(unsigned int hoursWorked);


//Main
int main(void)
{
	unsigned int hours=0, salary=0;
	int flag = FALSE; 

	//Get number of hours worked, Ask again if not correct.
	do
	{
		flag?printf("try Again!"):(flag = FALSE) ;
		
		hours = getInput();
		flag = TRUE;

	}while(hours > MAX_HOURS_WORKED) ;

	//calculate payment.
	salary = calculateSalary(hours);
	printf("salary is : %u\n", salary);

	return 0;
}


//funtion definition

static unsigned int getInput(void)
{
	unsigned int hoursWorked = 0;
	printf("Enter number of hours worked: ");
	scanf("%u", &hoursWorked);
	while(getchar() != '\n');

	return hoursWorked;
}


static unsigned int calculateSalary(unsigned int hoursWorked)
{
	unsigned int salary = 0;
	if( hoursWorked > WEEKLY_HOURS)
	{
		salary = WEEKLY_WAGE + (hoursWorked - WEEKLY_HOURS)*(EXTRA_HOUR_WAGE);
	}
	else
	{
		salary = HOURLY_WAGE*hoursWorked;
	}
	return  salary;
}