/*
   Write a program to display number of days in the given year. Check condition for leap year.
   A year is a leap year if it is divisible by 4 but not by 100, 
   except that years divisible by 400 are leap years.
   Without using logical operators
 */

#include <stdio.h>

int main() 
{
	int year;
	int days;

	// Ask the user to enter a year
	printf("Enter a year: ");
	scanf("%d", &year);

	// Check if the year is a leap year or not
	if (year % 4 == 0) 
	{
		// Year is divisible by 4
		if (year % 100 == 0) 
		{
			// Year is divisible by 100
			if (year % 400 == 0) 
			{
				// Year is divisible by 400
				days = 366; // Leap year
			} 
			else 
			{
				days = 365; // Not a leap year
			}
		} 
		else 
		{
			days = 366; // Leap year
		}
	} 
	else 
	{
		days = 365; // Not a leap year
	}

	// Display the number of days in the year
	printf("The number of days in the year %d is %d.\n", year, days);

	return 0;
}

