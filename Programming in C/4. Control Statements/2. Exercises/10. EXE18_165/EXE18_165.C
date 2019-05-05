//***********************************************************************************************
//Problem Statment: WAP to find sum of prime numbers in a range
//Page : 165		
//Aurthor : Ashwini kumar
//Date : 29.04.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>

//Global Variable

//Function prototype
static unsigned int (unsigned int num);

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