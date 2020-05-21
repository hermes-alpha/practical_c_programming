#include <stdio.h>
#include <assert.h>

int main(void)
{
	int c, noOfPassengers;
	char fl_from[30], fl_to[30], dateofJourney[12];

	printf("How many passengers? ");
	scanf("%d", &noOfPassengers);

	assert(noOfPassengers > 0 &&
			"Number of passengers should be a positive integer");
	while((c = getchar()) != '\n' && c != EOF);

	printf("Flight from: ");
	fgets(fl_from, 30, stdin);
	printf("Flight to: ");
	fgets(fl_to, 30, stdin);
	printf("Date of journey ");
	scanf("%s", dateofJourney);
	printf("The information entered is:\n"
			"Number of passengers %d\n"
			"Flight from: %s\n"
			"Flight to: %s\n"
			"Date of journey: %s\n",
			noOfPassengers, fl_from, fl_to, dateofJourney);

	return 0;
}
