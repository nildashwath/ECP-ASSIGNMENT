/*
Conditional operator
*/
#include <stdio.h>

int main() 
{
    int year;
    int days;

    // Ask the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Determine if the year is a leap year using the conditional operator
    days = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 366 : 365;

    // Display the number of days in the year
    printf("The number of days in the year %d is %d.\n", year, days);

    return 0;
}

