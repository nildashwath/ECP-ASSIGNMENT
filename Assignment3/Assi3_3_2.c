/*
Write a program to accept a number and Reverse the number
Input: 9362
Output: 2639
*/

#include <stdio.h>

int main() 
{
    int num, reverse = 0, digit;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num; // Store the original number for displaying later

    // Loop to reverse the number
    while (num > 0) 
	{
        digit = num % 10;          // Extract the last digit
        reverse = reverse * 10 + digit; // Build the reverse number
        num /= 10;                 // Remove the last digit from the number
    }

    // Display the result
    printf("The reverse of %d is %d\n", originalNum, reverse);

    return 0;
}

