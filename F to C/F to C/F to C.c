// Programmer:		Russell Welch
// Date:			April 12th 2022
// Program Name:	F to C
// Chapter:			Chapter 6 - Functions
// Description:		This program prints a table of Fahrenheit temperatures to corresponding Celsius
//					This utilizes a function to calculate the Celsius from a Fahrenheit temperature.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

// Constant and Variable Declarations
int minTemp, maxTemp;

// Function to convert temp from F to C
double FahrenheitToCelsius(double FahrenheitTemp) {
	double CelsiusTemp = (5.0 / 9) * (FahrenheitTemp - 32);
	return CelsiusTemp;
}

int main(void)
{
	// Get min Fahrenheit
	printf("Enter a starting Fahrenheit temperature: \n");
	scanf("%d", &minTemp);

	// Verify min Fahrenheit
	while ((minTemp < -100) || (minTemp > 300)) {
		printf("\tThe starting temperature must be between -100 and 300 degrees.\n");
		printf("\tPlease re-enter the starting temperature: \n");
		scanf("%d", &minTemp);
	}

	// Get max Fahrenheit
	printf("Enter an ending Fahrenheit temperature:\n");
	scanf("%d", &maxTemp);
	
	// Verify max Fahrenheit
	while ((maxTemp < -100) || (maxTemp > 300)) {
		printf("\tThe ending temperature must be between -100 and 300 degrees.\n");
		printf("\tPlease re-enter the ending temperature: \n");
		scanf("%d", &maxTemp);
	}

	printf("\n"); // Spacer
	printf("Fahrenheit      Celsius\n"); // Header

	// Print table from min to max
	for (int fahrenheitTemp = minTemp; fahrenheitTemp <= maxTemp; fahrenheitTemp++) {
		double celsiusTemp = FahrenheitToCelsius(fahrenheitTemp); // Uses function to convert F to C
		printf("%d               %.1lf\n", fahrenheitTemp, celsiusTemp);
	}

	printf("\n"); // Spacer from exit prompt

	return 0;
} // end main()
