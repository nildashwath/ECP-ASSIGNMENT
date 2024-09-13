/*
Write a function to indicate whether given number is prime or not. Write another function to print prime numbers in the given range.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) 
{
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    if (num == 2) return true;   // 2 is a prime number
    if (num % 2 == 0) return false;  // Even numbers greater than 2 are not prime

    // Check for factors from 3 to sqrt(num)
    for (int i = 3; i * i <= num; i += 2) 
	{
        if (num % i == 0) return false;  // num is divisible by i, so it's not prime
    }

    return true;  // num is prime
}

// Function to print all prime numbers in a given range
void printPrimesInRange(int start, int end) 
{
    if (start > end) 
	{
        printf("Invalid range. Start should be less than or equal to end.\n");
        return;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) 
	{
        if (isPrime(i)) 
		{
            printf("%d ", i);  // Print the prime number
        }
    }
    printf("\n");  // Move to the next line after printing all prime numbers
}

int main() 
{
    int start, end;

    // Ask the user for the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Call the function to print prime numbers in the given range
    printPrimesInRange(start, end);

    return 0;
}

