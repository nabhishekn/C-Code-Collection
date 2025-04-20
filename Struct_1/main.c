/******************************************************************************
Define a structure named Time with members hours, minutes, and seconds.
Write a C program to input two times, add them, and display the result in proper time format.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

struct Time {
	uint8_t hours;
	uint8_t minutes;
	uint8_t seconds;
};

int main()
{
	struct Time Time1, Time2, Result;

	printf("Enter Time1: ");
	scanf("%hhd %hhd %hhd", &Time1.hours, &Time1.minutes, &Time1.seconds);
	printf("Enter Time2: ");
	scanf("%hhd %hhd %hhd", &Time2.hours, &Time2.minutes, &Time2.seconds);

	if((Time1.seconds + Time2.seconds) > 60)
	{
		Result.seconds = (Time1.seconds + Time2.seconds) - 60;
		Result.minutes = 1;
	}
	else{
	    Result.seconds = (Time1.seconds + Time2.seconds);
	}
	if((Time1.minutes + Time2.minutes + Result.minutes) > 60)
	{
	    Result.minutes = (Time1.minutes + Time2.minutes + Result.minutes) - 60;
	    Result.hours = 1;
	}
	else{
	    
	    Result.minutes = (Time1.minutes + Time2.minutes + Result.minutes);
	    Result.hours = 0;
	}
	//printf("%hhd\n", Result.hours);
	if((Time1.hours + Time2.hours + Result.hours) > 24)
	{
	    printf("invalid hours");
	    return -1;
	}
	else
	{
	    Result.hours = Time1.hours + Time2.hours + Result.hours; 
	}
	printf("\n%hhd, %hhd, %hhd", Result.hours, Result.minutes, Result.seconds);
	return 0;
}
