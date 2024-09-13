/*
Write a function to return next term of Fibonacci series with each call to the function.
*/

#include <stdio.h>

// Function to get the next term in the Fibonacci series
int getNextFibonacci() 
{
    static int a = 0;   // First term of Fibonacci series
    static int b = 1;   // Second term of Fibonacci series
    int next = a;       // Initialize the next term with the current term 'a'

    // Calculate the next term in the Fibonacci series
    a = b;
    b = next + b;       // Update 'b' to the new term which is 'a + b'

    return next;        // Return the current term
}

int main() 
{
    int terms;

    // Ask the user for the number of terms they want to generate
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    // Print the Fibonacci series
    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) 
	{
        printf("%d ", getNextFibonacci());  // Call the function to get the next term
    }
    printf("\n");

    return 0;
}

