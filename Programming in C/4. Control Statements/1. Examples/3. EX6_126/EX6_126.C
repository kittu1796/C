//***********************************************************************************************
//Problem Statment: WAP to tell whether two numbers are equal or not.
//Page : 126		
//Aurthor : Ashwini kumar
//Date : 14.04.19
//*************************************************************************************************

//MACRO DEFINITION
#define EQUAL 0
#define UNEQUAL -1

//Header files
#include<stdio.h>

//Global variables


//Function prototype
static int equalOrNot(int num1 ,int  num2);


//Main
int main(void)
{
	int number1=0, number2=0, equalOrNotBit =0; 

	printf("Enter integer number1: ");
	scanf("%d", &number1);
	while(getchar() != '\n');

	printf("Enter integer number2: ");
	scanf("%d", &number2);
	while(getchar() != '\n');

	equalOrNotBit = equalOrNot(number1, number2);
	printf("The numbers are %s.\n", equalOrNotBit?"Unequal":"Equal");

	return 0;
}


//funtion definition
static int equalOrNot(int num1, int num2)
{
	if(num1 == num2)
	{
		return EQUAL;
	}
	else
	{
		return UNEQUAL;
	}
}

