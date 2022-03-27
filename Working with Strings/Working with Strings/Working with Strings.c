// Programmer:		Russell Welch & Zackery Hadley
// Date:			February 23rd 2022
// Program Name:	Working with Strings
// Chapter:			Chapter 3 - Decisions
// Description:		This program takes in two names and uses logical operations to decide which is longer and which comes first.
//                  This information is outputted back to the user, and the last letter of the first name is uppercased by accessing the array and using the toupper function.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Necessary to use string in C

int main(void)
{
	// Function definitions
	// 
	// strlen() The strlen() function takes a string as an argument and returns its length. The returned value is of type size_t (the unsigned integer type).
	// strcmp() compares two strings character by character. If the strings are equal, the function returns 0.
	// > 0 if the first non-matching character in str1 is greater (in ASCII) than that of str2
	// < 0 if the first non-matching character in str1 is lower (in ASCII) than that of str2.

	// Constant and Variable Declarations
	
	char firstName[20];
	char secondName[20];

	// *** Your program goes here ***

	// Input
	printf("Enter your first name: ");
	scanf("%s", firstName);

	printf("Enter your partner's first name: ");
	scanf("%s", secondName);

	printf("\n"); // Spacer from input and output

	// Check string lengths
	if ((strlen(firstName)) == (strlen(secondName))) {
		printf("The 2 names, %s and %s, are equal lengths.\n", firstName, secondName);
	}
	else if ((strlen(firstName)) >= (strlen(secondName))) {
		printf("%s is the longer name.\n", firstName);
	}
	else { // If the the first name isn't longer the second one has to be
		printf("%s is the longer name.\n", secondName);
	}

	if (strcmp(firstName, secondName) < 0) { // If the first name isnt first alphabetically the second has to be
		printf("The name that comes first alphabetically is %s.\n", firstName);
	}
	else {
		printf("The name that comes first alphabetically is %s.\n", secondName);
	}

	// We always uppercase the first inputted name so no logic case here
	printf("%s with the last character converted to uppercase is ", firstName); // We purposefully skip the newline to process the modified name first

	// We take the length of the string and subtract 1 to get the final real character (avoiding the null character)
	// and assign that character to itself but in uppercase using the toupper function.
	firstName[strlen(firstName)-1] = toupper(firstName[strlen(firstName) - 1]);

	// We previously skipped a newline so this will continue on the same output and prints the modified firstName variable
	printf("%s.\n", firstName);

	printf("\n"); // Spacer from output and exit prompt

	return 0;
} // end main()
