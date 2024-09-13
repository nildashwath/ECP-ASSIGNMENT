/*
Write a program to display day of week from given date (day, month and year).
*/

#include <stdio.h>

// Function to calculate the day of the week based on Zeller's Congruence
const char* getDayOfWeek(int day, int month, int year) 
{
    // Zeller's Congruence algorithm
    // Adjust months January and February to be 13 and 14 of the previous year
    if (month < 3) 
	{
        month += 12;
        year--;
    }

    int k = year % 100; // Year of the century (last two digits)
    int j = year / 100; // Zero-based century (first two digits)

    // Zeller's Congruence formula
    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    // Map the result to day names
    switch (dayOfWeek) 
	{
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Unknown"; // This should not happen
    }
}

int main() 
{
    int day, month, year;

    // Ask the user to enter the date
    printf("Enter the day (1-31): ");
    scanf("%d", &day);
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year (e.g., 2024): ");
    scanf("%d", &year);

    // Simple input validation
    if (day < 1 || day > 31) 
	{
        printf("Invalid day. Please enter a day between 1 and 31.\n");
        return 1;
    }
    if (month < 1 || month > 12) 
	{
        printf("Invalid month. Please enter a month between 1 and 12.\n");
        return 1;
    }

    // Calculate the day of the week
    const char* dayOfWeek = getDayOfWeek(day, month, year);

    // Display the result
    printf("The day of the week for %d/%d/%d is %s.\n", day, month, year, dayOfWeek);

    return 0;
}

