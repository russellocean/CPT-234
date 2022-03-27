// Programmer:		Russell Welch
// Date:			March 4th, 2022
// Program Name:	Perfect Squares
// Chapter:			Chapter 4 - Repetition
// Description:		This program takes a user input within a declared range and finds all the perfect squares within that range.
//					It utilizes a while loop for error checking and the math library to calculate the square root and deal with floating point comparisons.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <math.h> // Needed for square root and absolute functions

int main(void)
{
	// Constant and Variable Declarations
	const int MINIMUM_VALUE = 1;
	const int MAXIMUM_VALUE = 1000;

	int userNumber; // Used to hold input

	// *** Your program goes here ***

	// Input
	printf("Enter a number between 1 and 1000 inclusive: ");
	scanf("%d", &userNumber);

	while (userNumber < MINIMUM_VALUE || userNumber > MAXIMUM_VALUE) { // If the users input is not within the range we ask again
		printf("\tThe number you entered, %d, was not between %d and %d.\n", userNumber, MINIMUM_VALUE, MAXIMUM_VALUE); // Let the user know the error
		printf("\tPlease re-enter a number between 1 and 1000 inclusive: "); // Ask again
		scanf("%d", &userNumber); // Re-input before checking if valid through next loop
	}

	printf("\nThe perfect squares between %d and %d inclusive are:\n", MINIMUM_VALUE, userNumber);

	// We loop through all values from 1 to the valid user's input.
	for (int i = MINIMUM_VALUE; i <= userNumber; i++) {
		double currentRadicand = sqrt((double)i); // We take the current index value and calculate its square root. We must cast the index to a double first or else it will always return an integer.

		// We take the current square root of the current index and subtract it from an integer version also of current index (which doesn't have a decimal place)
		// Then we are left with only the decimal place, if this is less than our precision limit we know this is a whole number and likewise a perfect square
		// We don't just compare to 0 or else floating point precision could make it return false
		if (currentRadicand - (int)currentRadicand < 0.0001) 
		{
			printf("%d\n", i); // Finally if the value is a whole number we print the current index to show its a perfect square.
		}
	}

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
