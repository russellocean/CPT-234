// Programmer:		Russell Welch & Zack Hadley
// Date:			April 19th 2022
// Program Name:	Average an Array
// Chapter:			Chapter 6 - Functions
// Description:		This program populates an array, averages, and then outputs that average by utilizing functions.
//					These functions can work with any size of array, and all perform independently to create a modular workflow.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Populates array of any size
void populateArray(double *array, const int ARRAY_SIZE) {
	// Loop through array and assign each value
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("Enter a value for #%d: ", i + 1);
		scanf("%lf", &array[i]);
	}

}

// Averages array of any size
double avgArray(double array[], const int ARRAY_SIZE) {
	double total = 0; // Our sum holder
	for (int i = 0; i < ARRAY_SIZE; i++) {
		total += array[i];
	}
	double average = total / ARRAY_SIZE;
	return average;
}

void outputAvg(double averageValue) {
	printf("The average of the values is %.2lf.\n", averageValue);
}

int main(void)
{
	// Constant and Variable Declarations
	const int ARRAY_SIZE = 10;

	double userArray[10]; // Declare our array that will be filled

	// *** Your program goes here ***
	populateArray(userArray, ARRAY_SIZE); // Pass array by pointer, works for any array size

	printf("\n"); // Spacer from input and output

	outputAvg(avgArray(userArray, ARRAY_SIZE)); // We use the return of the average of the array as the input to our output function. This allows 1 line to utilize two functions and both average and output.

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
