// Programmer:		Russell Welch & Michael Steiger & Jay Kuehmeier
// Date:			February 7th 2022
// Program Name:	Split Double
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program takes an input and displays the whole number, as well as the decimal part of it.
//					We cast the input to an integer and subtract it from itself to get the remaining decimal place.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double userValue;

	// *** Your program goes here ***
	// Input
	printf("Enter a number that includes a decimal point: ");
	scanf("%lf", &userValue);

	// We assign the double to not output past the decimal point by using the .0
	printf("The integer part of %lf is %.0lf.", userValue, userValue);

	// Here we subtract to total value by the casted same value, this results in only the decimal point remaining
	double decimalValue = userValue - (int)userValue;

	printf("\nThe decimal part of %lf is %lf.", userValue, decimalValue);
	printf("\n\n"); // Space line for exit statement to be seperated

	return 0;
} // end main()