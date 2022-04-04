// Programmer:		Russell Welch
// Date:			April 4th
// Program Name:	Soccer Team Roster
// Chapter:			Chapter 5 - Arrays
// Description:		2 complete English sentences describing what the program does,
//					algorithm used, etc.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int TEAM_SIZE = 5;

	int playersNumbers[5];
	int playersRatings[5];

	int didQuit = 0;

	char userInput;
	// *** Your program goes here ***

	for (int currentPlayer = 0; currentPlayer < TEAM_SIZE; currentPlayer++) {
		printf("Enter player %d's jersey number:\n", currentPlayer + 1);
		scanf("%d", &playersNumbers[currentPlayer]);
		printf("Enter player %d's rating:\n", currentPlayer + 1);
		scanf("%d", &playersRatings[currentPlayer]);

		printf("\n");
	}

	// Print roster
	printf("ROSTER\n"); // Header
	for (int currentPlayer = 0; currentPlayer < TEAM_SIZE; currentPlayer++) {
		printf("Player %d -- Jersey number: %d, Rating: %d\n", currentPlayer + 1, playersNumbers[currentPlayer], playersRatings[currentPlayer]);
	}

	printf("\n");

	while (didQuit == 0) {
		printf("MENU\n");
		printf("u - Update player rating\n");
		printf("a - Output players above a rating\n");
		printf("r - Replace player\n");
		printf("o - Output roster\n");
		printf("q - Quit\n");
		printf("\n");
		printf("Choose an option:\n");

		scanf(" %c", &userInput);

		if (userInput == 'u')
		{
			int jerseyInput;
			printf("Enter a jersey number:");
			scanf("%d", &jerseyInput);

			for (int currentPlayer = 0; currentPlayer < TEAM_SIZE; currentPlayer++) {
				if (playersNumbers[currentPlayer] == jerseyInput) {
					printf("Enter a new rating for player:");
					scanf("%d", &playersRatings[currentPlayer]);
				}
			}
		}

		if (userInput == 'a')
		{
			int userRating;
			printf("Enter a rating:");
			scanf("%d", &userRating);

			printf("\nABOVE %d\n", userRating);
			for (int currentPlayer = 0; currentPlayer < TEAM_SIZE; currentPlayer++) {
				if (playersRatings[currentPlayer] > userRating) {
					printf("Player %d -- Jersey number: %d, Rating: %d\n", currentPlayer + 1, playersNumbers[currentPlayer], playersRatings[currentPlayer]);
				}
			}
			printf("\n");
		}

		if (userInput == 'r')
		{
			int jerseyInput;
			printf("Enter a jersey number:");
			scanf("%d", &jerseyInput);

			for (int currentPlayer = 0; currentPlayer < TEAM_SIZE; currentPlayer++) {
				if (playersNumbers[currentPlayer] == jerseyInput) {
					printf("Enter a new jersey number:");
					scanf("%d", &jerseyInput);

					playersNumbers[currentPlayer] = jerseyInput;

					printf("Enter a new rating for player:");
					scanf("%d", &playersRatings[currentPlayer]);
				}
			}
		}

		if (userInput == 'o')
		{
			// Print roster
			printf("ROSTER\n"); // Header
			for (int currentPlayer = 0; currentPlayer < TEAM_SIZE; currentPlayer++) {
				printf("Player %d -- Jersey number: %d, Rating: %d\n", currentPlayer + 1, playersNumbers[currentPlayer], playersRatings[currentPlayer]);
			}
			printf("\n");
		}

		if (userInput == 'q') {
			// I would prefer to just return 0 here but assignment calls to do it like this
			didQuit = 1;
		}
	}

	return 0;
} // end main()
