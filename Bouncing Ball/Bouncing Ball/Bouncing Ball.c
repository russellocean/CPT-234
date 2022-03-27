// Programmer:		Russell Welch
// Date:			March 8th 2022
// Program Name:	Bouncing Ball
// Chapter:			Chapter 4 - Repetition
// Description:		This program calculates a balls total amount of bounces of a ball given its initial height and coefficient of restitution.
//					It utilizes input verificition with repitition methods and calculates accuracy down to 1 inch of bounce height, as well as having catches for infinite cases.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const double MINIMUM_HEIGHT = 0.0;

	const double MINIMUM_RESTITUTION = 0.0;
	const double MAXIMUM_RESTITUTION = 1.0;

	const int INCHES_PER_FOOT = 12;
	const int ONE_INCH = 1;

	// Input variables
	double initialHeight;
	double restitutionCoef;

	double ballHeight;
	double totalInches;
	int totalBounces = 0;

	// *** Your program goes here ***

	// Input for height
	printf("Enter the initial height of the ball (in feet): ");
	scanf("%lf", &initialHeight);
	while (initialHeight < MINIMUM_HEIGHT) { // Verify height input
		printf("\tThe initial height of the ball must be greater than or equal to %.1lf.\n", MINIMUM_HEIGHT);
		printf("\tPlease re-enter the initial height of the ball (in feet): ");
		scanf("%lf", &initialHeight);
	}

	// Our initial height is given in feet so we must convert it to total inches.
	ballHeight = initialHeight * INCHES_PER_FOOT;

	// Input for restitution
	printf("Enter the balls' coefficient of restitution (%.1lf to %.1lf inclusive): ", MINIMUM_RESTITUTION, MAXIMUM_RESTITUTION);
	scanf("%lf", &restitutionCoef);
	while (restitutionCoef < MINIMUM_RESTITUTION || restitutionCoef > MAXIMUM_RESTITUTION) { // Verify restitution is in bounds
		printf("\tThe coefficient of restitution must be between %.1lf and %.1lf inclusive.\n", MINIMUM_RESTITUTION, MAXIMUM_RESTITUTION);
		printf("\tPlease re-enter the balls' coefficient of restitution (%.1lf to %.1lf inclusive): ", MINIMUM_RESTITUTION, MAXIMUM_RESTITUTION);
		scanf("%lf", &restitutionCoef);
	}

	printf("\n"); // Spacer from input to output

	// Check for infinite bounces
	if (restitutionCoef == 1.0) {
		printf("With a coefficient of restitution equal to %.1lf, the ball will bounce forever!\n", restitutionCoef);
	}
	else {
		while (ballHeight > ONE_INCH) { // We only stop looping when the ball is below 1 inch
			ballHeight *= restitutionCoef; // Balls height is current height times restitution
			if (ballHeight > ONE_INCH) { // We put a second check in the loop in case this bounce results in less than one inch, in which we don't want to include it in total bounces.
				totalBounces++; // Every time the ball is above one inch we add another bounce
			}
		}

		if (totalBounces > 1) {
			printf("The ball bounced %d times.\n", totalBounces); // Multiple case
		}
		else {
			printf("The ball bounced %d time.\n", totalBounces);  // Singular case
		}
	}

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()