//***********************************************************************************************
//Problem Statment: WAP to print all the even and odd numbers of a certain range as indicated by 
//					the user
//Page : 164		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************

//Macro definition
#define ODD 0U
#define EVEN 1U

//Library
#include <stdio.h>

//Global Variable
static long lowerRange=0;
static long upperRange=0;

//Function prototype
static void getUserInput(void);

//Main
int main(void)
{
	unsigned int start = 0;
	getUserInput();

	if(lowerRange%2)
	{//odd
		start = ODD;
	}
	else
	{// EVEN
		start = EVEN;
	}	

	for (int i = lowerRange; i < upperRange+1; ++i)
	{
		printf("\n\t %d is %s", i, (start?"even":"odd"));
		start = ~start;
	}
	return 0;
}


//Function
static void getUserInput(void)
{
	printf("\n\tEnter lower range: ");
	scanf("%u", &lowerRange);
	while(getchar() != '\n');

	printf("\n\tEnter upper range: ");
	scanf("%u", &upperRange);
	while(getchar() != '\n');

	if(upperRange < lowerRange)
	{
		printf("\t*************************\n");
		 getUserInput();
	}
}