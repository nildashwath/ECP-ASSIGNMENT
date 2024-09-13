/*
Write function to check whether given year is leap or not. Write another function to print number of days in given month.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool isLeapYear(int year) 
{
    // Check if year is divisible by 4
    if (year % 4 == 0) 
	{
        // Check if year is divisible by 100
        if (year % 100 == 0) 
		{
            // Check if year is divisible by 400
            if (year % 400 == 0) 
			{
                return true;  // Year is divisible by 400, so it is a leap year
            } 
			else 
			{
                return false; // Year is divisible by 100 but not by 400, so it is not a leap year
            }
        } 
		else 
		{
            return true;  // Year is divisible by 4 but not by 100, so it is a leap year
        }
    } 
	else 
	{
        return false; // Year is not divisible by 4, so it is not a leap year
    }
}

// Function to print the number of days in a month of a given year
void daysInMonth(int month, int year) 
{
    int days;

    // Determine the number of days in the month
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
	{
        days = 31;  // Months with 31 days
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        days = 30;  // Months with 30 days
    } 
	else if (month == 2) 
	{
        // February, need to check for leap year
        if (isLeapYear(year)) 
		{
            days = 29;  // Leap year February
        } 
		else 
		{
            days = 28;  // Non-leap year February
        }
    } 
	else 
	{
        printf("Invalid month. Please enter a number between 1 and 12.\n");
        return;  // Exit function if month is not valid
    }

    // Print the result
    printf("Number of days in month %d of year %d: %d\n", month, year, days);
}

int main() 
{
    int month, year;

    // Ask the user to enter the month
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    // Ask the user to enter the year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Call the function to print the number of days in the given month
    daysInMonth(month, year);

    return 0;
}

