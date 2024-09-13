/*
Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
*/

#include <stdio.h>

int main() 
{
    int num, sum = 0, digit;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num; // Store the original number for displaying later

    // Loop to extract each digit and add to the sum
    while (num > 0) 
	{
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num /= 10;         // Remove the last digit from the number
    }

    // Display the result
    printf("The sum of digits of %d is %d\n", originalNum, sum);

    return 0;
}

