/*
Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

int main() 
{
    int n, first = 1, second = 1, next;

    // Ask the user to input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle the case when n is less than or equal to 0
    if (n <= 0) 
	{
        printf("Number of terms should be a positive integer.\n");
        return 1;
    }

    // Print the Fibonacci series
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) 
	{
        if (i == 1) 
		{
            printf("%d", first); // Print the first term
        } else if (i == 2) 
		{
            printf(", %d", second); // Print the second term
        } 
		else 
		{
            next = first + second; // Calculate the next term
            printf(", %d", next); // Print the next term
            first = second; // Update the first term
            second = next; // Update the second term
        }
    }
    printf("\n");

    return 0;
}

