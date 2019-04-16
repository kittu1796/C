//***********************************************************************************************
//Problem Statment: Euler's number e is used as the base of natural logarithms. It may be
//					approximated using the formula., where n is sufficiently large. WAP that
//					approximates e using a loop that terminates when the difference between the two 
//					successive values of r is less than 0.0000001.
//Page : 152		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************

//Macro definition
#define MAX_DIFF 0.000000000001


//Libraries
#include <stdio.h>

//Global variables

//function Prototype


//Main
int main(void)
{
	double delta = 1.0;
	double currentTerm = 1.0;
	double nextTerm = 0.5;

	double e = 2;
	unsigned int n = 1;

	do
	{
		n++;
		nextTerm = currentTerm/n;
		e  += nextTerm;	
		delta = currentTerm - nextTerm;	 
		currentTerm = nextTerm;

	}while(delta > MAX_DIFF);

	printf("\tValue of e = %0.9lf\n\tn = %u", e,n);
}