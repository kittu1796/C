//***********************************************************************************************
//Problem Statment: WAP to print the quotient of an integer number without using '/'.
//Page : 164		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************


//Macro definition


//Library
#include <stdio.h>

//Global Variable

//Function prototype


//Main
int main(void)
{	
	int number, diviser, diff, n=0;

	printf("\n\tEnter number: ");
	scanf("%u", &number);
	while(getchar() != '\n');

	printf("\n\tEnter diviser: ");
	scanf("%u", &diviser);
	while(getchar() != '\n');

	diff = (number-number%diviser);
	while(diff)
	{
		diff -= diviser;
		n++; 
	}
	printf("\n\tQuotient : %d", n);
	return 0;
}


//Function
