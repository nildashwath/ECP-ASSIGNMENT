/*
   Using logical operators.
 */

#include <stdio.h>

int main() 
{
	int month, year;
	int days;

	// Ask the user to enter the month and year
	printf("Enter the month (1-12): ");
	scanf("%d", &month);
	printf("Enter the year: ");
	scanf("%d", &year);

	// Determine the number of days in the month
	if (month == 2) 
	{
		// February: Check for leap year
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
			days = 29; // Leap year
		} 
		else 
		{
			days = 28; // Not a leap year
		}
	} 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
		days = 30; // April, June, September, November
	} 
	else if (month >= 1 && month <= 12) 
	{
		days = 31; // January, March, May, July, August, October, December
	} 
	else 
	{
		// Invalid month
		printf("Invalid month. Please enter a value between 1 and 12.\n");
		return 1; // Exit with an error code
	}

	// Display the number of days in the month
	printf("The number of days in month %d of year %d is %d.\n", month, year, days);

	return 0;
}

