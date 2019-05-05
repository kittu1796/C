//***********************************************************************************************
//Problem Statment: Write a C program to convert the binary equivalent of an integer number 
//					without using array.
//Page : 164		
//Aurthor : Ashwini kumar
//Date : 16.04.19
//*************************************************************************************************

//Macro definition


//Library
#include <stdio.h>

//Global Variable

//Function prototype
static unsigned int intToBinary(int intNumber);
static int binaryToInt(unsigned int binaryNumber);

//Main
int main(void)
{
	int number=0;
	unsigned int bin=0;
	printf("Enter number: ");
	scanf("%d",&number);
	while(getchar()!='\n');

	bin = intToBinary(number);
	(number>=0)?printf("BIn : %u\n",bin ):main();

	printf("Int: %d\n", (int)binaryToInt(bin));

	return 0;
}


//Function
static unsigned int intToBinary(int intNumber)
{//only for +ve numbers.
	
	if(intNumber > 1)
	{
		return (unsigned int)(intNumber%2) + 10*intToBinary(intNumber/2);
	}
	else
	{
		return (unsigned int)intNumber;
	}
}


static int binaryToInt(unsigned int binaryNumber)
{//Only for +ve numbers
	if(binaryNumber > 1)
	{
		return (binaryNumber%10)+(2*binaryToInt(binaryNumber/10));
	}
	else
	{
		return binaryNumber;
	}
}
