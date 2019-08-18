//***********************************************************************************************
//Problem Statment: WAP to find sum of prime numbers in a range
//Page : 165		
//Aurthor : Ashwini kumar
//Date : 05.05.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>
#include <math.h>

//Global Variable

//Function prototype
static unsigned int checkPrime(unsigned int num);

//Main
int main(void)
{
	unsigned int low, high;
	unsigned long long sum = 0;


	printf(" Enter Low : ");
	scanf("%u", &low);

	printf("\n Enter high : ");
	scanf("%u", &high);	

	for (unsigned int i = low; i < sqrt(high); ++i)
	{
		if(checkPrime(i))
	}
	return 0;
}


//Function
static unsigned int checkPrime(unsigned int num)
{
	unsigned int sqrtOfNum = sqrt(num);

	for (unsigned int i = 2; i < sqrtOfNum+1; ++i)
	{
		if (num%i == 0)
		{
			return 0;
		}
	}

	return 1;
}