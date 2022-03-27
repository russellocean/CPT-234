// Programmer:		Russell Welch
// Date:			February 22nd 2022
// Program Name:	Shipping Charges
// Chapter:			Chapter 3 - Decisions
// Description:		This program determines a charge to ship a package dependent on weight.
//					It utilizes a nested if statement to have a safeguard from non valid answers, and directs the price based on the input from the user.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	// Cutoff values
	const double TWO_POUNDS = 2.0;
	const double SIX_POUNDS = 6.0;
	const double TEN_POUNDS = 10.0;
	const double MINIMUM = 0.0;

	// Shipping Charges
	const double TWO_OR_LESS = 1.25;
	const double TWO_TO_SIX  = 2.50;
	const double SIX_TO_TEN  = 3.90;
	const double OVER_TEN    = 4.40;

	// User input
	double packageWeight;

	double shippingCharge;

	// *** Your program goes here ***

	printf("Enter the weight of the package: ");
	scanf("%lf", &packageWeight);

	if (packageWeight >= MINIMUM) {
		if (packageWeight <= TWO_POUNDS) {
			shippingCharge = TWO_OR_LESS;
		}
		else if (packageWeight <= SIX_POUNDS) {
			shippingCharge = TWO_TO_SIX;
		}
		else if (packageWeight <= TEN_POUNDS) {
			shippingCharge = SIX_TO_TEN;
		}
		else {
			shippingCharge = OVER_TEN;
		}
		printf("The shipping charge is $%.2lf", shippingCharge); // Display shipping charge
	}
	else {
		printf("The weight of the package must be greater than %.2lf.", MINIMUM);
	}

	printf("\n\n"); // Spacing from exit prompt

	return 0;
} // end main()
