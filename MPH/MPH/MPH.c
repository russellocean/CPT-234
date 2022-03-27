// Programmer:		Russell Welch
// Date:			February 6th 2022
// Program Name:	MPH
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program calculates tthe MPH based on miles traveled, aswell as how long it took to travel that distance.
//					It uses a constant conversion factor variable to convert minutes to hours.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int MINUTES_IN_HOUR = 60;

	double milesDriven; // Our inputs
	int totalMinutes;

	double milesPerHour;

	int a = 4;
	int b = a + -2;

	// *** Your program goes here ***
	// Input
	printf("Enter the number of miles driven: ");
	scanf("%lf", &milesDriven);
	printf("Enter the number of minutes that it took to drive the %.1lf miles: ", milesDriven);
	scanf("%d", &totalMinutes);

	// Procesing MPH based on distance and time
	// Here we cast the total minutes to a double so that the total hours is in a decimal form
	milesPerHour = milesDriven / ((double)totalMinutes / MINUTES_IN_HOUR);

	// Output
	printf("\nBased on a trip of %.1lf miles that took %d minutes,\n", milesDriven, totalMinutes);
	printf("your speed was %.0lf MPH.\n", milesPerHour); // Split these lines to match the example output

	printf("\n"); // Blank line to give space to the exit prompt

	return 0;
} // end main()
