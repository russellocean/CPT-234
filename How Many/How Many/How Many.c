// Programmer:		Russell Welch
// Date:			February 8, 2022
// Program Name:	How Many
// Chapter:			Chapter 2 - Fundamentals
// Description:		This program displays a fast food menu with multiple options and prompts the user with their available money.
//					Using this information we calculate how many possible food items a customer can purchase of each item, which is outputted back.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double totalMoney = 0;
	int possibleHotDogs;
	int possibleHamburgers;
	int possibleChickenSandwiches;


	// *** Your program goes here ***

	// Output Menu
	printf("        Fast Food\n");
	printf("-------------------------\n");
	printf("Hot Dog w/ Chili....$1.50\n");
	printf("Hamburger...........$3.00\n");
	printf("Chicken Sandwich....$2.75\n");

	// Find customer's money
	printf("\nHow much money do you have? $");
	scanf("%lf", &totalMoney);

	// Calculate possiblities
	possibleHotDogs			  = totalMoney / 1.50;
	possibleHamburgers		  = totalMoney / 3.00;
	possibleChickenSandwiches = totalMoney / 2.75;

	// Output options
	printf("\nWith $%.2lf, you could buy\n", totalMoney);
	printf("  %d Hot Dogs w/ Chili, or\n", possibleHotDogs);
	printf("  %d Hamburgers, or\n", possibleHamburgers);
	printf("  %d Chicken Sandwiches\n", possibleChickenSandwiches);

	// Extra newline to lower exit prompt
	printf("\n");

	return 0;
} // end main()
