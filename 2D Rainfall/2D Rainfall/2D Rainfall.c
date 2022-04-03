// Programmer:		Russell Welch
// Date:			April 3rd 2022
// Program Name:	2D Rainfall
// Chapter:			Chapter 5 - Arrays
// Description:		This program takes a 2D rainfall data array and calculates the total rainfall per year and the average rainfall in each month across that time.
//					This is done by initilizing a 2D array with each row representing a different year, and the columns being the months. This allows easy traversal across data for calculations. 

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int YEAR_OFFSET = 2010; // Our starting year is 2010, so we offset our array year value by this amount
	const int MONTHS_IN_YEAR = 12;

	// We keep track of total rainfall in each year
	double totalRainfall2010 = 0;
	double totalRainfall2011 = 0;
	double totalRainfall2012 = 0;
	double totalRainfall2013 = 0;
	double totalRainfall2014 = 0;

	double averageMonthRainfall;

	// 2D array containing monthly rainfall data from 2010-2014
	double rainfallData[5][12] = {
		{ 0.88,  1.11,  2.01,  3.64,  6.44,  5.58,  4.23,  4.34,  4.00,  2.05,  1.48,  0.77 }, // 2010
		{ 0.76,  0.94,  2.09,  3.29,  4.68,  3.52,  3.52,  4.82,  3.72,  2.21,  1.24,  0.80 }, // 2011
		{ 0.67,  0.80,  1.75,  2.70,  4.01,  3.88,  3.72,  3.78,  3.55,  1.88,  1.21,  0.61 }, // 2012
		{ 0.82,  0.80,  1.99,  3.05,  4.19,  4.44,  3.98,  4.57,  3.43,  2.32,  1.61,  0.75 }, // 2013
		{ 0.72,  0.90,  1.71,  2.02,  2.33,  2.98,  2.65,  2.99,  2.55,  1.99,  1.05,  0.92 }  // 2014
	};

	// *** Your program goes here ***

	// Header
	printf("       Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");

	// Loop through each year
	for (int year = 0; year < 5; year++) {
		printf("%d", year + YEAR_OFFSET); // We first print the year of each row
		for (int month = 0; month < MONTHS_IN_YEAR; month++) { // Loop through each month in each year
			printf("  %.2lf", rainfallData[year][month]); // Print the rainfall data for current month and year
			switch (year) { // Calculate the sum of rainfall in each year using a switch statement
			case 0:
				totalRainfall2010 += rainfallData[year][month];
				break;
			case 1:
				totalRainfall2011 += rainfallData[year][month];
				break;
			case 2:
				totalRainfall2012 += rainfallData[year][month];
				break;
			case 3:
				totalRainfall2013 += rainfallData[year][month];
				break;
			case 4:
				totalRainfall2014 += rainfallData[year][month];
				break;
			}
		}
		printf("\n"); // When a years data is done being printed move onto the next line
	}
	printf("\n");

	// Output total rainfall per year
	printf("Total rainfall for each year:\n");
	printf("2010  %.2lf\n", totalRainfall2010);
	printf("2011  %.2lf\n", totalRainfall2011);
	printf("2012  %.2lf\n", totalRainfall2012);
	printf("2013  %.2lf\n", totalRainfall2013);
	printf("2014  %.2lf\n", totalRainfall2014);

	printf("\n"); // Spacer

	// Header
	printf("Average rainfall for each month:\n");
	printf(" Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");

	// Calculate and print average month rainfall
	for (int month = 0; month < MONTHS_IN_YEAR; month++) {
		averageMonthRainfall = 0; // We reuse this variable so initialize it to 0 inside the loop
		for (int year = 0; year < 5; year++) { // We loop through all 5 years per each month to only get that months data
			averageMonthRainfall += rainfallData[year][month]; // Sum it up
		}
		averageMonthRainfall /= MONTHS_IN_YEAR; // Average out the sum
		printf("%.2lf  ", averageMonthRainfall); // Print with spacing
	}

	printf("\n\n"); // Spacer from exit prompt

	return 0;
} // end main()
