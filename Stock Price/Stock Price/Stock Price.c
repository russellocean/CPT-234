// Programmer:		Russell Welch
// Date:			February 3rd 20222
// Program Name:	Stock Price
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program calculates the total purchasing price of shares depending on user input.
//					It uses scanf statements to recieve an integer and double value, which are used to return the final overal price by multiplication.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int NumberOfShares;
	double PricePerShare;
	double TotalMoneyNeeded;

	// *** Your program goes here ***
	// Here we simply ask for the inputs of the total shares and share price.
	printf("Enter the number of shares of stock: ");
	scanf("%d", &NumberOfShares); // Format specifiers are different for int and double.
	printf("\nEnter the dollar amount per share: $"); // We put the newline character on this output instead to keep the inputs infront of the colons.
	scanf("%lf", &PricePerShare);

	// Calculate the total amount needed 
	TotalMoneyNeeded = NumberOfShares * PricePerShare;
	// Before adding the format specifiers for our double outputs we restrict them to 2 decimal digits by adding .2 before the lf.
	printf("The amount of money needed to purchase %d shares of stock at $%.2lf is $%.2lf.\n", NumberOfShares, PricePerShare, TotalMoneyNeeded);
	// End the line with a \n so the press any key to continue is on a seperate line.

	return 0;
} // end main()
