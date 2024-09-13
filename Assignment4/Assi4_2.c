/*
Write a function to calculate power.
*/

#include <stdio.h>

// Function to calculate power
int power(int base, int exponent) 
{
    int result = 1;  // Start with 1 because multiplying by 1 doesn't change the value

    // Repeat the multiplication for the number of times equal to the exponent
    for (int i = 1; i <= exponent; i++) 
	{
        result = result * base;  // Multiply the current result by the base each time
    }

    return result;  // Return the final result after the loop
}

int main() 
{
    int base, exponent;

    // Ask the user to enter the base number
    printf("Enter the base number: ");
    scanf("%d", &base);

    // Ask the user to enter the exponent (how many times to multiply the base)
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power by calling the power function
    int result = power(base, exponent);

    // Display the result
    printf("%d to the power of %d is: %d\n", base, exponent, result);

    return 0;  // End of the program
}

