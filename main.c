#include <stdio.h>
#include <stdlib.h>
#include "oil.h"

int main(void) {
	int choice = 0;
	oil *oilData = malloc(sizeof(oil) * countYears());
	// In my original answer to this question, I had (oil *) before the malloc but this is only required in C++ code.
	getOilData(oilData);
	printChoices();
	scanf("%d", &choice);


	while (choice) { // This will be true as long as choice != 0
		switch (choice) {
		case 1:
			highestPrice(oilData);
			break;
		case 2:
			highestAvgPrice(oilData);
			break;
		default:
			puts("\nInvalid input.\n");
			break;
		}
		printChoices();
		scanf("%d", &choice);
	}
	return 0;
}
