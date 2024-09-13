/*
Write a function to calculate power using recursion.
*/

#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) 
{
    // Base case: If the exponent is 0, return 1
    if (exponent == 0) 
	{
        return 1;
    } 
	else 
	{
        // Recursive case: base^exponent = base * power(base, exponent - 1)
        return base * power(base, exponent - 1);
    }
}

int main() 
{
    int base, exponent;

    // Ask the user for the base number
    printf("Enter the base number: ");
    scanf("%d", &base);

    // Ask the user for the exponent
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the power function and display the result
    printf("%d raised to the power of %d is %d\n", base, exponent, power(base, exponent));

    return 0;
}

