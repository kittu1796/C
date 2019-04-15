//***********************************************************************************************
//Problem Statment: WAP to check whether a character entered by the user is a vowel or not.
//Page : 136		
//Aurthor : Ashwini kumar
//Date : 15.04.19
//*************************************************************************************************
//MACRO DEFINITION
#define VOWEL 1
#define CONSONENT 0

//Header files
#include<stdio.h>

//Global variables


//Function prototype
static unsigned int checkVowel(char ch);
static char getCharInput();


//Main
int main(void)
{
	char ch = getCharInput();
	if ( ch!= '-')
	{
		printf("Entered character is %sa vowel.\n",(checkVowel(ch)?"":"not "));
	}
	return 0;
}


//funtion definition
static unsigned int checkVowel(char ch)
{
	switch(ch)
	{
		//Upper Case
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U':

		//LOWE CASE

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return VOWEL;
			break;

		//CONSONENT
		default : 
			return CONSONENT;
			break;
	}
}


static char getCharInput()
{
	char ch;
	printf("Enter character(- to exit): ");
	ch = getchar();

	while(getchar() != '\n' );

	if (!(((ch >= 'A') && (ch <= 'Z')) || ((ch <= 'z') && (ch >= 'a')) || (ch == '-')))
	{
		ch = getCharInput();
	}
	
	return ch;
}