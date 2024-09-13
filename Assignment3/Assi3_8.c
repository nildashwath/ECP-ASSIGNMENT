/*
Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5
*/

#include <stdio.h>

int main() 
{
    int num, originalNum;
    int divisor = 2; // Start with the smallest prime number

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for final output

    // Print the prime factors
    printf("%d = ", originalNum);

    // Loop to find and print prime factors
    while (num > 1) {
        if (num % divisor == 0) 
		{
            printf("%d", divisor);
            num /= divisor; // Divide the number by the divisor

            if (num > 1) 
			{
                printf(" * ");
            }
        } 
		else 
		{
            divisor++; // Move to the next number
        }
    }

    printf("\n");
    return 0;
}

