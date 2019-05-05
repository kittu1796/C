//***********************************************************************************************
//Problem Statment: WAP to find sum of digits of a number given by the user.
//Page : 165		
//Aurthor : Ashwini kumar
//Date : 29.04.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>

//Global Variable

//Main
static unsigned int SumOfDigits(unsigned int num);


//Main
int main(void)
{
	unsigned int number=0;

	printf("Enter number: ");
	scanf("%u", &number );
	while(getchar()!= '\n');

	printf("Sum of digits : %u", SumOfDigits(number));

	return 0;
}

//Function 
static unsigned int SumOfDigits(unsigned int num)
{
	unsigned int sum = 0;

	sum = num%10;

	if (num -  sum )
	{
		return sum + SumOfDigits(num/10);
	}
	else
	{
		return sum;
	}
}
