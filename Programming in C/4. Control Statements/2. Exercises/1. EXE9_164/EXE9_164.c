//***********************************************************************************************
//Problem Statment: WAP using conditional operators to determine whether a year entered through 
//					keyboard is a leap year or not.
//Page : 164		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************
//MACRO DEFINITION
#define YEAR_4 4U
#define YEAR_100 100U
#define YEAR_400 400U
#define TRUE 1
#define FALSE 0

//Header files
#include<stdio.h>

//Global variables


//Function prototype
static unsigned int getInput(void);
static unsigned int checkLeapYear(unsigned int year);



//Main
int main(void)
{	
	unsigned int year = 0;

	//Get year from user >0
	year  = getInput();
	printf("\n\tYear %u is %s a leap year.\n",year, (checkLeapYear(year)?"":"not") );
	return 0;
}


//funtion definition
static unsigned int getInput(void)
{
	unsigned int year = 0, scanRet = 2;

	printf("Enter year: ");
	scanRet = scanf("%u", &year);
	while(getchar() != '\n');

	if(scanRet < 1)
	{
		year = getInput();
	}

	return year;
}

static unsigned int checkLeapYear(unsigned int year)
{
	unsigned int leapORNot = FALSE;

	if (year%YEAR_400 == 0)
	{
		leapORNot = TRUE;
	}
	else if ( year%YEAR_100 == 0)
	{
		leapORNot = FALSE;
	}
	else if (year%YEAR_4 == 0)
	{
		leapORNot = TRUE;
	}
	else
	{
		leapORNot = FALSE;
	}

	return leapORNot;
}