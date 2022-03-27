// Programmer:		Russell Welch
// Date:			01/24/22
// Program Name:	Hello Name
// Chapter:			Chapter 1 - Introduction to C
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userAge = 0;


	// *** Your program goes here ***
	printf("Hello Russell\n");

	printf("Enter your age: "); // prompt
	scanf("%d", &userAge); // get

	printf("You are %d years old.\n", userAge);

	printf("\n"); //blank 
	return 0;
} // end main()
