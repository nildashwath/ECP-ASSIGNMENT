/*
Write a program to accept a number and check whether it is Prime no.
*/

#include <stdio.h>

int main() 
{
    int num, isPrime = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1) 
	{
        printf("%d is not a prime number.\n", num);
    } 
	else 
	{
        // Check if the number is prime
        for (int i = 2; i <= num / 2; i++) 
		{
            if (num % i == 0) 
			{
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // Print the result
        if (isPrime) 
		{
            printf("%d is a prime number.\n", num);
        } 
		else 
		{
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

