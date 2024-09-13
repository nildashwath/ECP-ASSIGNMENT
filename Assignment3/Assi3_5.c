/*
Write a program to find factorial of given number. Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120
*/

#include <stdio.h>

int main() 
{
    int num, factorial = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the factorial calculation in reverse order
    printf("Factorial of %d: ", num);
    for (int i = num; i >= 1; i--) 
	{
        factorial *= i; // Multiply each number in reverse order
        printf("%d", i); // Print each number
        if (i > 1) {
            printf(" * ");
        }
    }

    // Print the final result
    printf(" = %d\n", factorial);

    return 0;
}

