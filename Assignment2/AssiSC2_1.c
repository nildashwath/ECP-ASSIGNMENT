/*
Write a program to display number of days in the given month and year using switch case statement.
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

    // Determine the number of days in the month using switch-case
    switch (month) 
	{
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            days = 30;
            break;
        case 2:  // February
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
			{
                days = 29; // Leap year
            } 
			else 
			{
                days = 28; // Non-leap year
            }
            break;
        default:
            printf("Invalid month. Please enter a number between 1 and 12.\n");
            return 1; // Exit with an error code
    }

    // Display the number of days in the month
    printf("The number of days in month %d of year %d is %d.\n", month, year, days);

    return 0;
}

