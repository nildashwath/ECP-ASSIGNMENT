/*
Write a function to print a given number in binary format.
*/

#include <stdio.h>

// Function to print a number in binary format
void printBinary(int number) 
{
    // If the number is 0, just print "0"
    if (number == 0) 
	{
        printf("0");
        return;
    }

    // Array to store binary digits
    int binary[32];
    int index = 0;

    // Convert the number to binary
    while (number > 0) 
	{
        binary[index] = number % 2;  // Get the last binary digit (0 or 1)
        number = number / 2;        // Divide the number by 2
        index++;                    // Move to the next position in the array
    }

    // Print the binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) 
	{
        printf("%d", binary[i]);
    }
}

int main() 
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number to convert to binary: ");
    scanf("%d", &num);

    // Print the number in binary format
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");

    return 0;
}

