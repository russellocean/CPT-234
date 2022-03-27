#define _CRT_SECURE_NO_WARNINGS // Remove before submit

#include <stdio.h>
#include <string.h>
// FIXME include the string library

int main(void) {

	const int OIL_PRICE = 35;
	const int TIRE_PRICE = 19;
	const int WASH_PRICE = 7;
	const int WAX_PRICE = 12;

	const char OIL_CHANGE[] = "Oil change, $35";
	const char TIRE_ROTATION[] = "Tire rotation, $19";
	const char CAR_WASH[] = "Car wash, $7";
	const char CAR_WAX[] = "Car wax, $12";

	char firstService[20];
	char secondService[20];

	int totalPrice = 0;

	printf("Davy's auto shop services\n");
	printf("Oil change -- $35\n");
	printf("Tire rotation -- $19\n");
	printf("Car wash -- $7\n");
	printf("Car wax -- $12\n");

	printf("\n");

	printf("Select first service:\n");
	scanf("%s", firstService);
	if (firstService[0] != '-') {
		scanf("%s", firstService);

		// Figure out first service
		if (strcmp(firstService, "change") == 0) {
			strcpy(firstService, OIL_CHANGE);
			totalPrice += OIL_PRICE;
		}
		else if (strcmp(firstService, "rotation") == 0) {
			strcpy(firstService, TIRE_ROTATION);
			totalPrice += TIRE_PRICE;
		}
		else if (strcmp(firstService, "wash") == 0) {
			strcpy(firstService, CAR_WASH);
			totalPrice += WASH_PRICE;
		}
		else if (strcmp(firstService, "wax") == 0) {
			strcpy(firstService, CAR_WAX);
			totalPrice += WAX_PRICE;
		}
	}
	else {
		strcpy(firstService, "No service");
	}

	printf("Select second service:\n");
	scanf("%s", secondService);
	if (secondService[0] != '-') {
		scanf("%s", secondService);

		// Figure out second service
		if (strcmp(secondService, "change") == 0) {
			strcpy(secondService, OIL_CHANGE);
			totalPrice += OIL_PRICE;
		}
		else if (strcmp(secondService, "rotation") == 0) {
			strcpy(secondService, TIRE_ROTATION);
			totalPrice += TIRE_PRICE;
		}
		else if (strcmp(secondService, "wash") == 0) {
			strcpy(secondService, CAR_WASH);
			totalPrice += WASH_PRICE;
		}
		else if (strcmp(secondService, "wax") == 0) {
			strcpy(secondService, CAR_WAX);
			totalPrice += WAX_PRICE;
		}
	}
	else {
		strcpy(secondService, "No service");
	}

	printf("\nDavy's auto shop invoice\n");
	printf("\nService 1: %s\n", firstService);
	printf("Service 2: %s\n",   secondService);

	printf("\nTotal: $%d\n", totalPrice);

	return 0;
}