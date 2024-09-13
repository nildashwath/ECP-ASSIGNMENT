/*
Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/

#include <stdio.h>

int main() 
{
    int num, originalNum, remainder, result = 0;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number to check later

    // Loop to calculate the sum of cubes of the digits
    while (num > 0) 
	{
        remainder = num % 10;             // Extract the last digit
        result += remainder * remainder * remainder; // Add the cube of the digit to result
        num /= 10;                        // Remove the last digit from the number
    }

    // Check if the original number is equal to the sum of cubes of its digits
    if (result == originalNum) 
	{
        printf("%d is an Armstrong number.\n", originalNum);
    } 
	else 
	{
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}

