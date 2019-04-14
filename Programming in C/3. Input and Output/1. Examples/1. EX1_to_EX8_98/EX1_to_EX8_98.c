//***********************************************************************************************
//Problem Statment: Expamples 
//				ex	1. Display a given character
//				ex  2. Display a keyed in character
//				ex 	3. Accept a given charater and display the next charater from the ASCII table
//				ex  4. Diaplay a keyed in charater and the next character from the ASCII table.
//				ex  5. Double the output of next tow charaters from the ASCII table.
//				ex  6. Print a keyed character
//				ex  7. same as ex 6.
//				ex  8. Get an ASCII number that is ahead by two positions from the keyed number. 
//Page : 98-99
//Aurthor : Ashwini kumar
//Date : 014.04.19
//***********************************************************************************************

//MACRO DEFINITION


//Function Prototype
//static void 
static char getInput();
static void showOutput();

//Global variables

//Main

//Funtion declaration

//************************************************************************************************
//Name : getInput()
//Input : None
//Output : char entered by user
//Aurthor :  Ashwini Kumar
//************************************************************************************************
static char getInput()
{
	char ch ; 
	ch = getchar();
	while(getchar() != '\0');
	return ch;
}

//************************************************************************************************
//Name : showOutput()
//Input : None
//Output : Node
//Aurthor :  Ashwini Kumar
//************************************************************************************************

static void showOutput()
{
	
}