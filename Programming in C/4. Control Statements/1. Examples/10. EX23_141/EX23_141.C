//***********************************************************************************************
//Problem Statment: Sum of digits of a positive number.
//Page : 141		
//Aurthor : Ashwini kumar
//Date : 15.04.19
//*************************************************************************************************
//MACRO DEFINITION


//Header files
#include<stdio.h>

//Global variables


//Function prototype
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

//funtion definition
