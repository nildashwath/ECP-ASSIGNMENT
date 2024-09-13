/*
Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500
*/

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) 
{
    if (num <= 1) return 0;
    if (num == 2) return 1;  // 2 is the only even prime number
    if (num % 2 == 0) return 0;

    // Check divisibility up to num/2
    for (int i = 3; i <= num / 2; i += 2) 
	{
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) 
{
    int sum = 0, originalNum = num, digit;
    while (num > 0) 
	{
        digit = num % 10;
        sum += digit * digit * digit;  // Cubing each digit
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {
    // Part (a): Display prime numbers between 1 and 100
    printf("Prime numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++) 
	{
        if (isPrime(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");

    // Part (b): Display Armstrong numbers between 1 and 500
    printf("Armstrong numbers between 1 and 500:\n");
    for (int i = 1; i <= 500; i++) 
	{
        if (isArmstrong(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

