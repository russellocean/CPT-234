// Programmer:		Russell Welch
// Date:			April 19th 2022
// Program Name:	Progs 2, 3, 4
// Chapter:			Chapter 6 - Functions
// Description:		This program utilizes functions to display a menu, ask for input, and run different programs from previous chapters.
//					These function calls are repeated inside of our main loop to run different programs without restarting, as well as provide an exit prompt.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int DisplayMenu(); // Displays menu and ask for input

void RunProgram(int program); // Run specific program

void SplitDouble(); // Chapter 2
void MinutesHoursDays(); // Chapter 3
void CaloriesBurned(); // Chapter 4

int main(void)
{
	// Ask for first decision to know if the user quits immediatly
	int userInput = DisplayMenu();
	while (userInput > 0) { // Any negative number is our exit prompt
		RunProgram(userInput); // Run the program requested, if it's not valid the loop will ask again.
		printf("\n\n"); // Double spacer between programs and menu
		userInput = DisplayMenu(); // Reprint and ask again
	}

	printf("Good bye!\n\n"); // Spacer from exit prompt

	return 0;
} // end main()

int DisplayMenu() {
	int userChoice = 0;

	// Display options
	printf("Progs 2, 3, 4 Menu\n");
	printf("------------------------\n");
	printf("2 - Split Double\n");
	printf("3 - Minutes, Hours, Days\n");
	printf("4 - Calories Burned\n");
	printf("\n");

	// Input
	printf("Enter a choice (-1 to quit): ");
	scanf("%d", &userChoice);
	printf("\n");

	return userChoice;
}

void RunProgram(int program) {
	switch (program) {
		case 2: // Run Split Double
			SplitDouble();
			break; 

		case 3: // Run Minutes, Hours, Days
			MinutesHoursDays();
			break; 

		case 4: // Calories Burned
			CaloriesBurned();
			break; 

		default: 
			return; // Will ask again
	}
}

void SplitDouble() {
	// Constant and Variable Declarations
	double userValue;

	// Input
	printf("Enter a number that includes a decimal point: ");
	scanf("%lf", &userValue);

	// We assign the double to not output past the decimal point by using the .0
	printf("The integer part of %lf is %.0lf.", userValue, userValue);

	// Here we subtract to total value by the casted same value, this results in only the decimal point remaining
	double decimalValue = userValue - (int)userValue;

	printf("\nThe decimal part of %lf is %lf.\n", userValue, decimalValue);
}

void MinutesHoursDays() {
	// Constant and Variable Declarations
	const int SECONDS_IN_MINUTE = 60;
	const int SECONDS_IN_HOUR = 3600;
	const int SECONDS_IN_DAY = 86400;

	int totalSeconds;
	double totalMinutes;
	double totalHours;
	double totalDays;

	// INPUT
	printf("Enter the number of seconds: ");
	scanf("%d", &totalSeconds);

	// Catch instance if total time is 0 or less
	if (totalSeconds < 1) {
		printf("The number of seconds entered must be greater than 0.\n");
		return; // Exit program
	}

	// Calculate total amounts
	totalMinutes = (double)totalSeconds / SECONDS_IN_MINUTE;
	totalHours = (double)totalSeconds / SECONDS_IN_HOUR;
	totalDays = (double)totalSeconds / SECONDS_IN_DAY;

	// Check if there is at least 1 minute
	if (totalMinutes >= 1) {
		printf("\nThe number of seconds you entered, %d, is %0.2lf minutes.\n", totalSeconds, totalMinutes);
	}
	// Check if there is at least 1 hour
	if (totalHours >= 1) {
		printf("The number of seconds you entered, %d, is %0.2lf hours.\n", totalSeconds, totalHours);
	}
	// Check if there is at least 1 day
	if (totalDays >= 1) {
		printf("The number of seconds you entered, %d, is %0.2lf days.\n", totalSeconds, totalDays);
	}
}

void CaloriesBurned() {
	// Constant and Variable Declarations
	const double CALORIES_PER_MIN = 3.9;
	const int STARTING_TIME = 10;
	const int ENDING_TIME = 30;
	const int INCREMENT_TIME = 5;

	int currentTime = STARTING_TIME;
	double currentCal;

	// *** Your program goes here ***

	// Information
	printf("You burn 3.9 calories every minute you run.\n");
	printf("This shows how many calories you burn if you ran for 10 to 30 minutes.\n");

	printf("\n"); // Spacer

	// Headings
	printf("\tMinutes Calories\n");
	printf("Using a while loop\n");

	// While loop
	while (currentTime <= ENDING_TIME) {
		currentCal = currentTime * CALORIES_PER_MIN;
		printf("\t  %d\t%.2lf\n", currentTime, currentCal);
		currentTime += INCREMENT_TIME; // Increment
	}

	printf("\n"); // Spacer

	printf("Using a do-while loop\n");

	// Reset values for next loop.
	currentCal = 0;
	currentTime = STARTING_TIME;

	// Do While loop
	do {
		currentCal = currentTime * CALORIES_PER_MIN;
		printf("\t  %d\t%.2lf\n", currentTime, currentCal);
		currentTime += INCREMENT_TIME; // Increment
	} while (currentTime <= ENDING_TIME);

	printf("\n"); // Spacer

	printf("Using a for loop\n");
	// Reset values for next loop.
	currentCal = 0;
	currentTime = STARTING_TIME;

	// For loop
	for (currentTime; currentTime <= ENDING_TIME; currentTime += INCREMENT_TIME) {
		currentCal = currentTime * CALORIES_PER_MIN;
		printf("\t  %d\t%.2lf\n", currentTime, currentCal);
	}
}