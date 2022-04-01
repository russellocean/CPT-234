// Programmer:		Russell Welch and Zack Hadley
// Date:			March 31st 2022
// Program Name:	Rainfall Stats - a collaborative program
// Chapter:			Chapter 5 - Arrays
// Description:		This program takes in monthly rainfall in all 12 months, and then calculates the total rainfall, average rainfall, lowest monthly rainfall, and highest monthly rainfall.
//					This utilizes multiple loops for input, display, and processing. As well as array's to store data and abbreviations for the arrays.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h>

int main(void)
{
	// Constant and Variable Declarations

	const int MONTHS_IN_YEAR = 12;

	// Array of abbreviated names of the months
	const char MONTHS[12][4] = {
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"Jun",
		"Jul",
		"Aug",
		"Sep",
		"Oct",
		"Nov",
		"Dec"
	};

	// Array that holds users inputs, parallel to the one above
	double rainfallValues[12];

	// All of our processed values
	double totalRain = 0;
	double averageRain;
	double lowestRain;
	int	   lowestRainMonth;
	double highestRain;
	int	   highestRainMonth;

	// *** Your program goes here ***

	// INPUT

	for (int i = 0; i < MONTHS_IN_YEAR; i++) {
		printf("Enter the rainfall(in inches) for %s: ", MONTHS[i]);
		scanf("%lf", &rainfallValues[i]);
	}

	//
	// We want to seperate the first 6 and last 6 months on different lines
	// Because we can't modify text above in the command prompt we have to repeat the loop for the second half.
	//

	printf("\n"); // Spacer
	printf("The rainfall that was entered was:\n");

	// First 6 Months
	for (int i = 0; i < MONTHS_IN_YEAR / 2; i++) {
		printf("%s\t", MONTHS[i]); // Print the month titles
	}
	printf("\n"); 
	for (int i = 0; i < MONTHS_IN_YEAR / 2; i++) {
		printf("%.1lf\t", rainfallValues[i]); // Print the rainfall values underneath
	}
	printf("\n");
	// Last 6 Months
	for (int i = MONTHS_IN_YEAR / 2; i < MONTHS_IN_YEAR; i++) {
		printf("%s\t", MONTHS[i]); // Print the month titles
	}
	printf("\n");
	for (int i = MONTHS_IN_YEAR / 2; i < MONTHS_IN_YEAR; i++) {
		printf("%.1lf\t", rainfallValues[i]); // Print the rainfall values underneath
	}
	printf("\n\n");

	// PROCESSING

	// Total Rainfall
	for (int i = 0; i < MONTHS_IN_YEAR; i++) {
		totalRain += rainfallValues[i];
	}

	// Average Rainfall
	averageRain = totalRain / MONTHS_IN_YEAR;

	// Lowest Rainfall
	lowestRain = rainfallValues[0];
	for (int i = 0; i < MONTHS_IN_YEAR; i++) {
		if (lowestRain > rainfallValues[i]) {
			lowestRain = rainfallValues[i];
			lowestRainMonth = i;
		}
	}

	// Highest Rainfall
	highestRain = rainfallValues[0];
	for (int i = 0; i < MONTHS_IN_YEAR; i++) {
		if (highestRain < rainfallValues[i]) {
			highestRain = rainfallValues[i];
			highestRainMonth = i;
		}
	}

	// OUTPUT

	printf("The total rain that fell was %.1lf inches.\n", totalRain);
	printf("The average monthly rainfall was %.1lf inches.\n", averageRain);
	printf("The lowest monthly rainfall was %.1lf inches in %s.\n", lowestRain, MONTHS[lowestRainMonth]);
	printf("The highest monthly rainfall was %.1lf inches in %s.\n", highestRain, MONTHS[highestRainMonth]);

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()