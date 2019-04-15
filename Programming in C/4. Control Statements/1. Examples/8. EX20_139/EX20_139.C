//***********************************************************************************************
//Problem Statment: Consider a general while loop that accepts input from the keyboard and counts 
//					the positive integers until a negative number is entered.
//Page : 139		
//Aurthor : Ashwini kumar
//Date : 15.04.19
//*************************************************************************************************
//MACRO DEFINITION


//Header files
#include<stdio.h>

//Global variables


//Function prototype



//Main
int main(void)
{
	int num, counter=0;

	do
	{
		printf("Enter Positive integer number: ");
		scanf("%d", &num);
		while(getchar()!= '\n');
		counter++;

	}while(num >= 0);

	printf("Counter : %d \n",--counter );
	return 0;
}


//funtion definition
