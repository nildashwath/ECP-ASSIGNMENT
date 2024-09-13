/*
Write a program to accept a number and Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
*/

#include <stdio.h>

int main() 
{
    int num, reverse = 0, digit, originalNum;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number to check later

    // Loop to reverse the number
    while (num > 0) 
	{
        digit = num % 10;               // Extract the last digit
        reverse = reverse * 10 + digit; // Build the reverse number
        num /= 10;                      // Remove the last digit from the number
    }

    // Check if the original number is the same as the reversed number
    if (originalNum == reverse) 
	{
        printf("%d is a numeric palindrome.\n", originalNum);
    } 
	else 
	{
        printf("%d is not a numeric palindrome.\n", originalNum);
    }

    return 0;
}

