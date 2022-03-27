// Programmer:		Russell Welch & David Griffith
// Date:			March 7th 2022
// Program Name:	Calories Burned
// Chapter:			Chapter 4 - Repetition
// Description:		This program calculates calories burned through a 10 to 30 minute interval by periods of 5 mins.
//					It utilizes a while loop, a do while loop, and a for loop.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const double CALORIES_PER_MIN = 3.9;
	const int STARTING_TIME  = 10;
	const int ENDING_TIME    = 30;
	const int INCREMENT_TIME = 5;

	int currentTime = STARTING_TIME;
	double currentCal;

	// *** Your program goes here ***

	// Information
	printf("You burn 3.9 calories every minute you run.\n");
	printf("This shows how many calories you burn if you ran for 10 to 30 minutes.\n");
	
	printf("\n"); // Spacer

	// Headings
	printf("\tMinutes Calories\n");
	printf("Using a while loop\n");

	// While loop
	while (currentTime <= ENDING_TIME) {
		currentCal = currentTime * CALORIES_PER_MIN;
		printf("\t  %d\t%.2lf\n", currentTime, currentCal);
		currentTime += INCREMENT_TIME; // Increment
	}

	printf("\n"); // Spacer

	printf("Using a do-while loop\n");

	// Reset values for next loop.
	currentCal = 0;
	currentTime = STARTING_TIME;

	// Do While loop
	do {
		currentCal = currentTime * CALORIES_PER_MIN;
		printf("\t  %d\t%.2lf\n", currentTime, currentCal);
		currentTime += INCREMENT_TIME; // Increment
	} while (currentTime <= ENDING_TIME);

	printf("\n"); // Spacer

	printf("Using a for loop\n");
	// Reset values for next loop.
	currentCal = 0;
	currentTime = STARTING_TIME;

	// For loop
	for (currentTime; currentTime <= ENDING_TIME; currentTime += INCREMENT_TIME) {
		currentCal = currentTime * CALORIES_PER_MIN;
		printf("\t  %d\t%.2lf\n", currentTime, currentCal);
	}

	printf("\n"); // Spacer

	return 0;
} // end main()
