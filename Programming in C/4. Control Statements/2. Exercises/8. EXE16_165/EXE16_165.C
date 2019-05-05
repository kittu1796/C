//***********************************************************************************************
//Problem Statment: WAP to find GCD of two numbers.
//Page : 165		
//Aurthor : Ashwini kumar
//Date : 29.04.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>
#include <math.h>

//Global Variable
static unsigned int userInput1 =0, userInput2=0;

//Function prototype
static void getUserInput(void);
static unsigned int computeGCD(unsigned int num1, unsigned int num2);

//Main
int main(void)
{
	getUserInput();

	printf("\n\t %u\n", computeGCD(userInput1,userInput2));
	return 0;
}

//Function 
static void getUserInput(void)
{


	printf("Enter num1 :");

	scanf("%u",&userInput1);
	while(getchar() != '\n');

	printf("\nEnter num2 :");
	scanf("%u",&userInput2);
	while(getchar() != '\n');

}

static unsigned int computeGCD(unsigned int num1, unsigned int num2)
{
	unsigned int sqrtNum = 1, divisor = 0, num = 0, numLeft, temp;

	if(num2 > num1)
	{
		num = num1;
		numLeft = num2;
	}
	else 
	{
		num = num2;
		numLeft = num1;
	}
	
	printf("%u,%u\n", num, numLeft);

	for (int i = 1; i <= num; ++i)
	{
		if((num%i==0) && (numLeft%i == 0))
		{
			divisor = i;
		}
	}

	return divisor;
}