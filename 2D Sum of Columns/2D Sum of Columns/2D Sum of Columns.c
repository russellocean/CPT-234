// Programmer:		Russell Welch
// Date:			March 31st 2022
// Program Name:	2D Sum of Columns
// Chapter:			Chapter 5 - Arrays
// Description:		This program populates an two-deminsional array with numbers from 1 to 100 with a new row every 10 columns.
//					We then compile the sum of columns 4 and 9 by using check statements as we loop through the array again.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int ARRAY_DIMINSIONS = 10;

	int numberArray[10][10]; // Initilize array

	int row;
	int col;

	int fourthColSum = 0;
	int ninthColSum = 0;

	int counter = 1; // Used to keep track 

	// *** Your program goes here ***\

	for (row = 0; row < ARRAY_DIMINSIONS; row++) {
		for (col = 0; col < ARRAY_DIMINSIONS; col++) {
			numberArray[row][col] = counter; // Here we fill the array with our counter variable which increases with each loop
			counter++;
		}
	}

	// OUTPUT

	printf("The contents of a 2-dimensional array, populated with the values 1 to 100...\n");
	for (row = 0; row < ARRAY_DIMINSIONS; row++) {
		for (col = 0; col < ARRAY_DIMINSIONS; col++) {
			printf("%d\t", numberArray[row][col]); // Print the array we just created
		}
		printf("\n");
	}

	printf("\n");
	for (row = 0; row < ARRAY_DIMINSIONS; row++) {
		for (col = 0; col < ARRAY_DIMINSIONS; col++) {
			if (col == 3) {
				fourthColSum += numberArray[row][col]; // Find everything in the 4rd column and add it to the sum
			}
			if (col == 8) { // We use 1 less than the column we want because arrays start at 0
				ninthColSum += numberArray[row][col]; // Find everything in the 9th column and add it to the sum
			}
		}
	}

	printf("The sum of the 4th column is %d.\n", fourthColSum);
	printf("The sum of the 9th column is %d.\n", ninthColSum);

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
