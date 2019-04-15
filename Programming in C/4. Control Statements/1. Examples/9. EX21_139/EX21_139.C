//***********************************************************************************************
//Problem Statment: Program that asks the user to enter some numbers and then find their average.
//Page : 139		
//Aurthor : Ashwini kumar
//Date : 15.04.19
// Description : numbers entered are Natural number, average 3 dicimal digit precision.
//*************************************************************************************************
//MACRO DEFINITION

//Header files
#include<stdio.h>

//Global variables

//Function prototype

//Main
int main(void)
{
 	unsigned int sum=0, counter=0;
 	int number=0;

	do
	{
		sum += (unsigned int)number;
		printf("\n\tEnter number(<0 to exit): ");
		scanf("%d", &number);
		while(getchar()!= '\n');
		counter++;
		

	}while(number >= 0);

	--counter;
	printf("Average : %0.3f \n",(sum*1.0/counter) );
	return 0;
}


//funtion definition
