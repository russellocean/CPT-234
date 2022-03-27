// Programmer:		Russell Welch
// Date:			February 24th, 2022
// Program Name:	Average of 2 Highest
// Chapter:			Chapter 3 - Decisions
// Description:		This program takes three positive integer inputs from a user and finds the two largest ones.
//					The two largest numbers are then averaged out and outputted back to the user, this program utilizes nested if statements and casting.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf


int main(void)
{
	// Constant and Variable Declarations
	const int ZERO = 0;

	int inputOne;
	int inputTwo;
	int inputThree;

	double averageValue;

	// *** Your program goes here ***

	// Input
	printf("Enter the 1st non-zero positive number : ");
	scanf("%d", &inputOne);


	// First number
	if (inputOne <= ZERO) { // First number invalid
		printf("The 1st number was not positive.\n");
	}
	else {
		// Second number
		printf("Enter the 2nd non-zero positive number : ");
		scanf("%d", &inputTwo);

		if (inputTwo <= ZERO) { // Second number invalid
			printf("The 2nd number was not positive.\n");
		}

		else {
			// Third number
			printf("Enter the 3rd non-zero positive number : ");
			scanf("%d", &inputThree);

			if (inputThree <= ZERO) { // Third number invalid
				printf("The 3rd number was not positive.\n");
			}

			else {
				if ((inputOne < inputTwo) && (inputOne < inputThree)) {
					averageValue = ((double)inputTwo + inputThree) / 2; // If first input is smallest
					printf("\nThe average of the 2 highest numbers\n");
					printf("(%d and %d) is %.2lf.\n", inputTwo, inputThree, averageValue);
				}
				if ((inputTwo < inputOne) && (inputTwo < inputThree)) {
					averageValue = ((double)inputOne + inputThree) / 2; // If second input is smallest
					printf("\nThe average of the 2 highest numbers\n");
					printf("(%d and %d) is %.2lf.\n", inputOne, inputThree, averageValue);
				}
				if ((inputThree < inputOne) && (inputThree < inputTwo)) {
					averageValue = ((double)inputOne + inputTwo) / 2;   // If third input is smallest
					printf("\nThe average of the 2 highest numbers\n");
					printf("(%d and %d) is %.2lf.\n", inputOne, inputTwo, averageValue);
				}
			}
		}
	}

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
