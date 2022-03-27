// Programmer:		Russell Welch
// Date:			March 10th 2022
// Program Name:	Sales Commission
// Chapter:			Chapter 4 - Repetition
// Description:		This program calculates the commission of an sales until a sentinel value is given by the user.
//					There are two methods used, one with a while loop, and one with a do-while loop

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations

	const int MINIMUM_SALES = 0;

	const int BASE_SALARY = 200;
	const double COMMISSION_RATE = 0.09; // 9%

	double saleInput; // User input

	int amountOfSales = 0; // Used for our average sales value
	double totalSales = 0.0; 
	double averageSales;

	double workerPay = 0.0; // How much our worker is getting paid (combines base salary and commission)

	// *** Your program goes here ***

	// Informative text on how this loop works
	printf("*** Using a pre-test (while) loop ******************************\n");
	printf("***  This requires the initial prompt and get before the loop,\n");
	printf("***  the processing (and output) at the top of the loop,\n");
	printf("***  and a re-prompt (and re-get) at the bottom of the loop,\n");
	printf("***  (but it doesn't require a decision inside the loop).\n");
	printf("****************************************************************\n");

	// Initial prompt before loop
	printf("\nEnter the amount of sales (-1 to quit): $"); 
	scanf("%lf", &saleInput);

	// Add our initial salary
	workerPay += BASE_SALARY;

	while (saleInput != -1) { // While not using the exit prompt value 
		amountOfSales++; // We know if we made it inside the loop there is a valid sale

		workerPay += saleInput * COMMISSION_RATE; // Add our commission pay and output
		printf("The person receives $%.2lf\n", workerPay);

		totalSales += saleInput; // Keep track of each sale

		printf("\nEnter the amount of sales (-1 to quit): $"); // Heres our re-prompt
		scanf("%lf", &saleInput);

	}

	// This is a safety net for if the user exits immediately, or else we divide by 0
	if (amountOfSales == MINIMUM_SALES) {
		averageSales = 0.0;
	}
	else {
		averageSales = totalSales / amountOfSales; // If we are above our minimum amount of sales we calculate the average
	}

	printf("\nThe total of the sales was $%.2lf\n", totalSales);
	printf("The average sales was $%.2lf", averageSales);

	printf("\n\n");

	// Now we move onto our post-test method
	
	// First we reset all of our values to be used again.
	amountOfSales = 0; // Used for our average sales value
	totalSales = 0.0;
	averageSales = 0.0;

	workerPay = BASE_SALARY; // Reset our worker pay to the base salary

	// Informative text on how this loop works
	printf("*** Using a post-test (do...while) loop ************************\n");
	printf("***  This requires the prompt and get at the top of the loop,\n");
	printf("***  and then a decision to see if the process (and output)\n");
	printf("***  should be done\n");
	printf("***  (but the prompt (and get) is only written once).\n");
	printf("****************************************************************\n");

	do {
		// We ask for our first input inside the loop
		// Reduces redundancy in prompts, but requires a two identical decisions
		printf("\nEnter the amount of sales (-1 to quit): $"); 
		scanf("%lf", &saleInput);


		if (saleInput != -1) { // Check for sentinel value
			amountOfSales++; // We know if we made it inside the loop there is a valid sale

			workerPay += saleInput * COMMISSION_RATE; // Add our commission pay and output
			printf("The person receives $%.2lf\n", workerPay);

			totalSales += saleInput; // Keep track of each sale
		}
	} while (saleInput != -1); // Checks after each loop

	// This is a safety net for if the user exits immediately, or else we divide by 0
	if (amountOfSales == MINIMUM_SALES) {
		averageSales = 0.0;
	}
	else {
		averageSales = totalSales / amountOfSales; // If we are above our minimum amount of sales we calculate the average
	}

	printf("\nThe total of the sales was $%.2lf\n", totalSales);
	printf("The average sales was $%.2lf\n", averageSales);

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
