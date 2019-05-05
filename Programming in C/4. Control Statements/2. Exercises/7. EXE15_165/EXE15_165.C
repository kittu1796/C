//***********************************************************************************************
//Problem Statment: write a c program to check whether a number is multiple of 2 not
//Page : 165		
//Aurthor : Ashwini kumar
//Date : 28.04.19
//*************************************************************************************************

//Macro
#define POWER_OF_TWO 0
#define NOT_POWER_OF_TWO 1
#define TRUE 1
#define FALSE 0

//Libraries
#include <stdio.h>

//global variables

//function prototypes
static unsigned int powerOfTwoCheck(unsigned int num);

//Main
int main(void)
{
	unsigned int number,flag;

	
	printf("Enter number: ");
	scanf("%u", &number);
	while(getchar() != '\n');

	printf("\n\t%u is %s power of Two\n", number,(powerOfTwoCheck(number)?"not":""));

	return 0;
}

//Function 
static unsigned int powerOfTwoCheck(unsigned int num)
{
	unsigned int flag = NOT_POWER_OF_TWO;
	
	if(num%2 == 0)
	{
		if(num > 2)
			flag = powerOfTwoCheck(num/2);
		else
			flag = POWER_OF_TWO;
	}
	else
	{
		flag = NOT_POWER_OF_TWO;
	}

	
	return flag;
}