/*Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is C = 5/9*(F-32) */

#include <stdio.h>

int main() 
{
    int choice;
    float cel, fah;

    printf("Temperature Conversion:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Select any one Conversion:");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        // Convert Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &cel);

        fah = (cel * 9 / 5) + 32;  // Conversion formula

        printf("%.2f Celsius is %.2f Fahrenheit\n", cel, fah);
    } 
	else if (choice == 2) 
	{
        // Convert Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fah);

        cel = (fah - 32) * 5 / 9;  // Conversion formula

        printf("%.2f Fahrenheit is %.2f Celsius\n", fah, cel);
    } 

	else 
	{
        printf("'Invalid choice'- Please chose anyone from above ...!\n");
	
    }

    return 0;
}

