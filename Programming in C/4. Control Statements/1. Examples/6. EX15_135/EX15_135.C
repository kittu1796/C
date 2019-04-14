//***********************************************************************************************
//Problem Statment: WAP using switch statement to check whether a number given by the user is odd
//					or even.
//Page : 127		
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

	switch(number%2)
	{
		case 0:
			printf("Entered Number is Even\n");
			break;
	
		case 1: 
			printf("Entered Number is Odd\n");
			break;

		default:
			break;
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
