/*
Write a function to calculate factorial of a given number using recursion.
*/

#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) 
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) 
	{
        return 1;
    } 
	else 
	{
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() 
{
    int number;

    // Ask the user for a number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } 
	else 
	{
        // Call the factorial function and display the result
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}

