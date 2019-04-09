//***********************************************************************************************
//Problem Statment: WAP to read two integers with the following significance. The first
//					integer value represents a time of day on a 24hr clock, so that 1245 represents 
//					quater to one mid-day. The second Integer represents a time duration in similar
//					way so that 345 represents three hours and 45 minutes. This duration is to be 
//					added to the first time and the result printed out in the same notation, in 
//					this case 1630 which is the time 3 hours 45 mins after 1245.
//					Typical output might be 1415. Duration is 50.End time is 1505.
//Page : 38 		
//Aurthor : Ashwini kumar
//Date : 09.04.19
//***********************************************************************************************

#include<stdio.h>

//MACRO DEFINITION
#define MINUTE 60
#define HOUR 24
#define DIV_NUM 100

//Function Protoytpe
static int sumModuloN(int num1, int num2, int n);
static int quotiontN(int num1, int num2, int n);
static void addTime(int time1, int dur);
static void getInput();

//Global variables
int startTime=0, durationTime=0, endTime=0;

//Main
void main(void)
{

	getInput(); //Get user input

	addTime(startTime, durationTime);

	printf("Time is %d \n", endTime );
}

//Function declaration

//************************************************************************************************
//Name : getInput()
//Input : None
//Output : None
//Aurthor :  Ashwini Kumar
//Description : Get input from user
//				1. StartTime 
//				2. DurationTime
//************************************************************************************************
static void getInput()
{
	printf("\tEnter\n\tstart Time: ");
	scanf("%d", &startTime);

	printf("\n\tduration Time: ");
	scanf("%d", &durationTime);
}

//************************************************************************************************
//Name : addTime()
//Input : startTime & duration
//Output : endTime 
//Aurthor :  Ashwini Kumar
//Description : Add startTime & duration as per 24 hr & 60min rules  
//				1. StartTime 
//				2. DurationTime
//************************************************************************************************
static void addTime(int time1, int dur)
{
	int hourStartTime,hourDurationTime, minuteDurationTime, minuteStartTime;
	int extraHour=0,temp=0, endTimeMinute=0, endTimeHour=0;

	//Preprocessing
	hourStartTime = time1/DIV_NUM;
	hourDurationTime = dur/DIV_NUM;

	minuteStartTime = time1%DIV_NUM;
	minuteDurationTime = dur%DIV_NUM;

	//Add minutes
	extraHour = quotiontN(minuteStartTime, minuteDurationTime, MINUTE);
	endTimeMinute = sumModuloN(minuteStartTime, minuteDurationTime, MINUTE);

	//Add Hours 
	endTimeHour = sumModuloN(hourStartTime, hourDurationTime, HOUR);
	endTimeHour = sumModuloN(endTimeHour, extraHour, HOUR);

	//Final Time 
	endTime = endTimeHour*DIV_NUM + endTimeMinute;

}

//************************************************************************************************
//Name :  sumModuloN()
//Input : num1, num2, n
//Output : sum 
//Aurthor :  Ashwini Kumar
//Description :  
//				
//				
//************************************************************************************************
static int sumModuloN(int num1, int num2, int n)
{
	int sum = 0;

	sum = num1+num2;
	sum %= n;

	return sum; 
}

//************************************************************************************************
//Name :  squotiontN()
//Input : num1, num2, n
//Output : quotiont
//Aurthor :  Ashwini Kumar
//Description :  
//				
//				
//************************************************************************************************
static int quotiontN(int num1, int num2, int n)
{
	int quotiont = 0;

	quotiont = num2+num1;
	quotiont /= n ;

	return quotiont;
}