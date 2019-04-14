//***********************************************************************************************
//Problem Statment: WAP to print largest among three(n) numbers.
//Page : 125		
//Aurthor : Ashwini kumar
//Date : 14.04.19
//*************************************************************************************************

//MACRO DEFINITION
#define ZERO 0
#define NUMBER_LIMIT 3

//Header files
#include<stdio.h>

//Global variables
static int numberArray[] = {ZERO, ZERO, ZERO};

//Function prototype
static void getArrayInput(void);
static int computeLargestNumber(void);


//Main
int main(void)
{
	getArrayInput();
	printf("Largest Number is : %d \n", computeLargestNumber());
	return 0;
}


//funtion definition

//************************************************************************************************
//Name :  getArrayInput()
//Input :  None
//Output : None 
//Aurthor :  Ashwini Kumar
				
//************************************************************************************************
static void getArrayInput(void)
{
	printf(" Enter %d integer numbers:  \n", NUMBER_LIMIT);
	for (int i=0;  i < NUMBER_LIMIT ; i++)
	{
		printf("\n\tEnter Number %d: ", i+1);
		scanf("%d", &numberArray[i]);
		while(getchar() != '\n');
	}
}//End of getArrayInput()

//************************************************************************************************
//Name :  computeLargestNumber()
//Input :  None
//Output : int 
//Aurthor :  Ashwini Kumar	
//Description : gets the largest number from the array, valid for int type variable only		
//************************************************************************************************
static int computeLargestNumber(void)
{
	int currentLargest = numberArray[ZERO];

	for(int i = 1; i < NUMBER_LIMIT ; i++)
	{
		if (currentLargest < numberArray[i])
		{
			currentLargest = numberArray[i];
		}
	}

	return currentLargest;
}