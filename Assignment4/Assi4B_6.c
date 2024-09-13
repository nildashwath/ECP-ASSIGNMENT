/*
Write a function to print a given number in hexadecimal format.
*/

#include <stdio.h>

// Function to print a number in hexadecimal format
void printHexadecimal(int number) 
{
    // Array to map numbers to hexadecimal characters
    char hexDigits[] = "0123456789ABCDEF";

    // Handle the case where the number is 0
    if (number == 0) 
	{
        printf("0");
        return;
    }

    // Array to store the hexadecimal digits (max size for a 32-bit integer)
    char hex[8];
    int index = 0;

    // Convert the number to hexadecimal
    while (number > 0) 
	{
        int remainder = number % 16;      // Get the last digit in hexadecimal
        hex[index] = hexDigits[remainder]; // Map digit to hex character
        number = number / 16;            // Reduce number by dividing by 16
        index++;                         // Move to the next position in the array
    }

    // Print the hexadecimal digits in reverse order
    printf("Hexadecimal representation: ");
    for (int i = index - 1; i >= 0; i--) 
	{
        printf("%c", hex[i]);           // Print each digit
    }
    printf("\n");
}

int main() 
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number to convert to hexadecimal: ");
    scanf("%d", &num);

    // Print the number in hexadecimal format
    printHexadecimal(num);

    return 0;
}
