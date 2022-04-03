// Programmer:		Russell Welch
// Date:			April 3rd, 2022
// Program Name:	Bubble Sort
// Chapter:			Chapter 5 - Array
// Description:		This application takes in 10 user values and sorts them to be displayed again.
//					This is done by using the bubble sort algorithm.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int ARRAY_SIZE = 10;
	double bubbleSortArray[10];

	// *** Your program goes here ***

	// INPUT

	// Populate the array
	for (int i = 0; i < 10; i++) {
		printf("Enter a value for array element [%d]: ", i);
		scanf("%lf", &bubbleSortArray[i]);
	}

	printf("\n");

	// Redisplay the unsorted array
	printf("The un-sorted array:\n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%.2lf\n", bubbleSortArray[i]);
	}

	printf("\n");

	// PROCESSING

	// Bubble sort algorithm
	for (int i = 0; i < ARRAY_SIZE - 1; i++) {
		for (int j = 0; j < ARRAY_SIZE - i - 1; j++) {
			if (bubbleSortArray[j] > bubbleSortArray[j + 1]) { // If the value 1 ahead is larger, then swap the two
				double temp = bubbleSortArray[j]; // Temporary value

				bubbleSortArray[j] = bubbleSortArray[j + 1];

				bubbleSortArray[j + 1] = temp;
			}
		}
	}

	// OUTPUT

	// Display the sorted array
	printf("The sorted array:\n");
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%.2lf\n", bubbleSortArray[i]);
	}

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
