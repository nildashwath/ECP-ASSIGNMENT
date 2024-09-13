/*
Write a function to print given number of terms of Fibonacci series.
*/
#include <stdio.h>

// Function to print the first 'n' terms of the Fibonacci series
void printFibonacci(int n) 
{
    int a = 0, b = 1, next;

    // Print the Fibonacci series up to 'n' terms
    for (int i = 0; i < n; i++) 
	{
        if (i == 0) 
		{
            printf("%d ", a);  // Print the first term
        } 
		else if (i == 1) 
		{
            printf("%d ", b);  // Print the second term
        } 
		else 
		{
            next = a + b;      // Calculate the next term
            a = b;            // Update 'a' to the previous term 'b'
            b = next;         // Update 'b' to the new term
            printf("%d ", next);  // Print the next term
        }
    }
    printf("\n");  // Move to the next line after printing all terms
}

int main() 
{
    int terms;

    // Ask the user for the number of terms
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    // Call the function to print the Fibonacci series
    printFibonacci(terms);

    return 0;
}

