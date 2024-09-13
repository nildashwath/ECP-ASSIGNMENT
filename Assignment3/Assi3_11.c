/*
Write a program to find factorial of given number.
*/

#include <stdio.h>

int main() 
{
    int num, factorial = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } 
	else 
	{
        // Calculate the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i; // Multiply each number from 1 to num
        }

        // Print the factorial result
        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}

