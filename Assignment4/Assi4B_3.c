/*
Write a function to calculate GCD of given numbers using recursion.
*/

#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) 
{
    // Base case: If the second number is 0, the GCD is the first number
    if (b == 0) 
	{
        return a;
    } 
	else 
	{
        // Recursive case: Call the function with the second number and the remainder of a divided by b
        return gcd(b, a % b);
    }
}

int main() 
{
    int num1, num2;

    // Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if numbers are valid (non-negative)
    if (num1 < 0 || num2 < 0) 
	{
        printf("GCD is not defined for negative numbers.\n");
    } 
	else 
	{
        // Calculate and print the GCD
        printf("The GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    }

    return 0;
}

