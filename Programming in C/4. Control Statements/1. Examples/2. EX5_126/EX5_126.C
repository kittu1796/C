//***********************************************************************************************
//Problem Statment: WAP to detect odd or even number.
//Page : 126		
//Aurthor : Ashwini kumar
//Date : 14.04.19
//*************************************************************************************************
//MACRO DEFINITION
#define EVEN  0
#define ODD -1

//Header files
#include<stdio.h>

//Global variables


//Function prototype
static int evenOrOdd(int num);


//Main
int main(void)
{
	int number=0; 

	printf("Enter integer number: ");
	scanf("%d", &number);
	while(getchar() != '\n');

	if(number%2==0)
	{
		printf("Entered Number is Even\n");
	}
	else
	{
		printf("Entered Number is Odd\n");
	}
	return 0;
}


//funtion definition
static int evenOrOdd(int num)
{
	if(num%2==0)
	{
		printf("Entered Number is Even\n");
		return EVEN; //EVEN = 0
	}
	else
	{
		printf("Entered Number is Odd\n");
		return ODD; //ODD = -1
	}
	
}
