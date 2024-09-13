i/*
Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3
*/

#include <stdio.h>

int main() 
{
    int num1, num2, temp;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Store the original values for final output
    int originalNum1 = num1;
    int originalNum2 = num2;

    // Print the initial values
    printf("Finding GCD of %d and %d:\n", originalNum1, originalNum2);

    // Euclidean algorithm to find GCD
    while (num2 != 0) 
	{
        temp = num2;
        num2 = num1 % num2; // Compute remainder
        num1 = temp; // Update num1 with the previous num2

        // Print the current step
        if (num2 != 0) 
		{
            printf("%d %% %d = %d\n", num1, temp, num2);
        }
    }

    // Print the result
    printf("GCD of %d and %d is %d\n", originalNum1, originalNum2, num1);

    return 0;
}

