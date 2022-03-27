// Programmer:		Russell Welch
// Date:			February 17th 2022
// Program Name:	Minutes, Hours, Days
// Chapter:			Chapter 3 - Decisions
// Description:		This program takes a total amount of seconds and calculates the resulting minutes, hours, and days.
//					The key feature is that output only displays the total minutes, hours, and days if they are 1 or more independently using if statements.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	
	// Constant and Variable Declarations
	const int SECONDS_IN_MINUTE = 60;
	const int SECONDS_IN_HOUR = 3600;
	const int SECONDS_IN_DAY = 86400;

	int totalSeconds;
	double totalMinutes;
	double totalHours;
	double totalDays;

	// *** Your program goes here ***
	
	// INPUT
	printf("Enter the number of seconds: ");
	scanf("%d", &totalSeconds);

	// Catch instance if total time is 0 or less
	if (totalSeconds < 1) {
		printf("The number of seconds entered must be greater than 0.\n\n"); // Two new lines to give spacing on exit command
		return 0; // Exit program
	}

	// Calculate total amounts
	totalMinutes = (double)totalSeconds / SECONDS_IN_MINUTE;
	totalHours = (double)totalSeconds / SECONDS_IN_HOUR;
	totalDays = (double)totalSeconds / SECONDS_IN_DAY;

	// Check if there is at least 1 minute
	if (totalMinutes >= 1) {
		printf("\nThe number of seconds you entered, %d, is %0.2lf minutes.\n", totalSeconds, totalMinutes);
	}
	// Check if there is at least 1 hour
	if (totalHours >= 1) {
		printf("The number of seconds you entered, %d, is %0.2lf hours.\n", totalSeconds, totalHours);
	}
	// Check if there is at least 1 day
	if (totalDays >= 1) {
		printf("The number of seconds you entered, %d, is %0.2lf days.\n", totalSeconds, totalDays);
	}

	printf("\n"); // Spacer from program and exit prompt

	printf("dicksmash");
	return 0;
} // end main()
