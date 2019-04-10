//***********************************************************************************************
//Problem Statment: Predict output of the following code.
//Page : 64		
//Aurthor : Ashwini kumar
//Date : 10.04.19
//***********************************************************************************************

//Preprocessor directives
#define NUMBER_OF_QUESTIONS 5
#define ASCII_PERCENTAGE 37
#define ASCII_OPEN_PRANTHESIS 40
#define ASCII_CLOSE_PRANTHESIS 41
#define ASCII_SEMICOLON 59
#define TRUE 1
#define FALSE 0

#include<stdio.h>

//Global variable
static char* DisplayVariableString[] = { "010","010","010","53","53"};
static char DisplayPrintString[] = {'d','o','x','o','X'};
static int CorrectAnswers[] = {8,10,8,65,35};
static int UserAnswerInput[] = { 0,0,0,0,0};

//Function prototype
static void questionStructureDisplay(char* a, char dataType);
static void getUserInput(int questionNumber);
static int matchAnswer(int matchAnswer);
static int askToRepeat(void);

int main(void)
{
	int result  = TRUE;
	printf("\tWhat will be the output of the following program?\n");

	for (int i = 0; i < NUMBER_OF_QUESTIONS; ++i)
	{
		//Print question Number
		if (result)
		{
			printf("\n\t%d.", i+1);
			questionStructureDisplay( DisplayVariableString[i], DisplayPrintString[i]);
		
		}
		getUserInput(i);
		result = matchAnswer(i);
		if (!result)
		{
			if (askToRepeat())
			{
				--i;
			}
			else
			{
				printf("Correct Answer: %d \n", CorrectAnswers[i] );
			}

		}

	}
	return 0;
}

//************************************************************************************************
//Name : questionStructureDisplay()
//Input : 2. dataType  to be printed char  and 1. int variable stiring
//Output : None
//Aurthor :  Ashwini Kumar
//Description : Display the problem statement.
//************************************************************************************************
static void questionStructureDisplay(char* a, char dataType)
{
	printf("\n\t{\n\t\t" );

	printf("\n\t\tint a=%s%c", a,ASCII_SEMICOLON);
	printf("\n\t\tprintf%c\"\\n a=%c%c\",a%c%c",ASCII_OPEN_PRANTHESIS,ASCII_PERCENTAGE, dataType,ASCII_CLOSE_PRANTHESIS,ASCII_SEMICOLON);
	printf("\n\t}\n");
}

//************************************************************************************************
//Name : getUserInput()
//Input : Question number 
//Output : None
//Aurthor :  Ashwini Kumar
//Description : Display the problem statement.
//************************************************************************************************
static void getUserInput(int questionNumber)
{
	printf("Enter your answer: ");
	scanf("%d", &UserAnswerInput[questionNumber]);
	while(getchar() != '\n');

}
//************************************************************************************************
//Name : matchAnswer()
//Input : Question number 
//Output : None
//Aurthor :  Ashwini Kumar
//Description : match the answer provided by user.
//************************************************************************************************
static int matchAnswer(int questionNumber)
{
	if(UserAnswerInput[questionNumber] == CorrectAnswers[questionNumber])
	{
		printf("Correct Answer.\n");
		return TRUE;
	}
	else 
	{
		printf("Incorrect Answer.\n");
		return FALSE;
	}
}

//************************************************************************************************
//Name : askToRepeat()
//Input : None 
//Output : None
//Aurthor :  Ashwini Kumar
//Description : prompt the user whether he/she wants to retry?
//************************************************************************************************
static int askToRepeat()
{
	char tryAgain = 'n';

	printf("Want to Try again? (y/n)\n");
	tryAgain = getchar();

	while(getchar() != '\n');

	if( (tryAgain == 'y' )|| (tryAgain == 'Y') )
	{
		return TRUE;
	}
	else if ((tryAgain == 'n' )|| (tryAgain == 'N'))
	{
		return FALSE;
	}
	else
	{
		askToRepeat();
	}


}