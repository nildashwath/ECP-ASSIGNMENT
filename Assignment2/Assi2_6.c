/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/

#include <stdio.h>

int main() 
{
    int num, oriNum, revNum = 0, rem;

    // Ask the user to enter a 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Check if the number is a 5-digit number
    if (num < 10000 || num > 99999) {
        printf("The number is not a 5-digit number.\n");
        return 0;  // Exit the program
    }

    // Save the original number
    oriNum = num;

    // Reverse the number
    while (num > 0) 
	{
        rem = num % 10;              // Get the last digit of num
        revNum = revNum * 10 + rem; // Add the digit to reversedNum
        num = num / 10;                   // Remove the last digit from num
    }

    // Check if the reversed number is the same as the original number
    if (revNum == oriNum) 
	{
        printf("The number is a palindrome.\n");
    } 
	else 
	{
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

