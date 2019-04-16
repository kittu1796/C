//***********************************************************************************************
//Problem Statment: WAP to compute average of 10 scores entered by the user.
//Page : 155		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************

//Macro 
#ifndef NUMBER_OF_INPUTS
#define NUMBER_OF_INPUTS 10
#endif

//Libraries 
#include <stdio.h>

//Global Variable

//Function prototype

//Main
int main(void)
{
	float average=0, input =0;

	for (int i = 0; i < NUMBER_OF_INPUTS; ++i)
	{
		printf("\n\tEnter score %d: ", i+1);
		scanf("%f", &input);
		while(getchar() != '\n');

		average +=  input;
	}

	printf("average is : %0.3f\n", average/NUMBER_OF_INPUTS);
	return 0;
}