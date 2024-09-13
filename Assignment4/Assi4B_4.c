/*
Write a function to calculate nth term of the Fibonacci series using recursion. Write another function to print given number of terms of Fibonacci series.
*/

#include <stdio.h>

// Function to calculate nth Fibonacci number using recursion
int fibonacci(int n) 
{
    // Base cases: Return 0 for the 0th term, and 1 for the 1st term
    if (n == 0) 
	{
        return 0;
    } 
	else if (n == 1) 
	{
        return 1;
    } 
	else 
	{
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the Fibonacci series up to a given number of terms
void printFibonacciSeries(int terms) 
{
    // Loop to print each Fibonacci number
    for (int i = 0; i < terms; i++) 
	{
        // Print the Fibonacci number for the current position
        printf("%d ", fibonacci(i));
    }
    // Print a newline at the end
    printf("\n");
}

int main() 
{
    int numTerms;

    // Ask the user to enter the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);

    // Check if the number of terms is valid
    if (numTerms < 0) 
	{
        // Print an error message if the number of terms is negative
        printf("Number of terms cannot be negative.\n");
    } 
	else 
	{
        // Call the function to print the Fibonacci series
        printFibonacciSeries(numTerms);
    }

    return 0;
}

