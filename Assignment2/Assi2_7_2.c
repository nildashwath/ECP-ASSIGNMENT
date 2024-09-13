/*
   Using logical operators
 */


#include <stdio.h>

int main() 
{
	int year;
	int days;

	// Ask the user to enter a year
	printf("Enter a year: ");
	scanf("%d", &year);

	// Check if the year is a leap year using logical operators
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
		days = 366; // Leap year
	} 
	else 
	{
		days = 365; // Not a leap year
	}

	// Display the number of days in the year
	printf("The number of days in the year %d is %d.\n", year, days);

	return 0;
}

