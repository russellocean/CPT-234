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
	int num1 = 1;
	int num2 = 2;
	printf("Number 1: %d Number 2: %d", num2, num1);

	return 0;
} // end main()