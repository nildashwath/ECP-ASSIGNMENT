/*
Write a function to calculate factorial of a given number.
*/

#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) 
{
    int fact = 1; // Initialize fact to 1

    // Loop to multiply fact by each number from 1 to num
    for (int i = 1; i <= num; i++) 
	{
        fact = fact * i; // Multiply fact by i
    }

    return fact; // Return the final result
}

int main() 
{
    int number, result;

    // Ask the user to enter a number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Call the factorial function
    result = factorial(number);

    // Display the result
    printf("Factorial of %d is: %d\n", number, result);

    return 0; // End the program
}

