//***********************************************************************************************
//Problem Statment: WAP that determines if a year is leap year.
//Page : 164		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>

//Global Variable

//Function prototype
static unsigned int computeFactorial(unsigned int num);

//Main
int main(void)
{
	unsigned int number =0;
	printf("\n\tEnter n : ");
	scanf("%u", &number);
	while(getchar() != '\n');

	printf("\n\tFactorial : %u", computeFactorial(number));
	return 0;
}


//Function
static unsigned int computeFactorial(unsigned int num)
{
	if ( !((num == 0 )|| (num == 1)))
	{
		return num*computeFactorial(num-1);
	}
	else
	{
		return 1;
	}
}