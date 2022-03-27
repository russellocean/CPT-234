// Programmer:		Russell Welch
// Date:			March 27th, 2022
// Program Name:	Reverse and Average
// Chapter:			Chapter 5 - Arrays
// Description:		This program takes in 10 values from the user and puts them into an array. From this point those values are reversed in a second array.
//					Finally we take the values from the same indicies of both arrays and average them into a third array at the same location - which is then all outputted back to the user.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declaration

	// Would prefer to use a const to declare all array sizes but that is not doable in C
	int inputArray[10];
	int reverseArray[10];
	double averageArray[10]; // Must be double as averages can be decimals

	int i; // Counter variable

	// *** Your program goes here ***

	// INPUT 
	for (i = 0; i < 10; i++) {
		printf("Enter value %d: ", i+1);
		scanf("%d", &inputArray[i]); // Put input values in array
	}
	
	// PROCESSING

	// Invert the input array and put it in the reverse array
	for (i = 0; i < 10; i++) {
		reverseArray[i] = inputArray[(10-1) - i]; 
	}

	// Average the indecies at both arrays and put them in a third array
	for (i = 0; i < 10; i++) {
		averageArray[i] = (inputArray[i] + reverseArray[i]) / 2.0; // Find average by adding the two and dividing by two
	}

	printf("\n"); // Spacer from input and output

	// OUTPUT

	// All the outputs are basically identical, we loop through all the indicies in the array's and print the the value followed by a tab.
	printf("The original array...\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", inputArray[i]);
	}
	printf("\n");

	printf("The reverse array...\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t", reverseArray[i]);
	}
	printf("\n");

	printf("The average array...\n");
	for (i = 0; i < 10; i++) {
		printf("%.1lf\t", averageArray[i]);
	}

	printf("\n\n"); // Spacer from output and exit prompt

	return 0;
} // end main()