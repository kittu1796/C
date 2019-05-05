//***********************************************************************************************
//Problem Statment: write a c program to find the prime factors of a number given by the user.
//Page : 165		
//Aurthor : Ashwini kumar
//Date : 28.04.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>

//Global Variable

//Function prototype

//Main
int main(void)
{
	unsigned int number;

	printf("\n\tEnter number: ");
	scanf("%u", &number);
	while(getchar() != '\n');

	printf("Primes are :" );

	for (unsigned int i = 2; i <= number; ++i)
	{
		if ((number%i == 0) && !(number == i))
		{
			printf(" %u ", i );
		}
	}

	return 0;
}