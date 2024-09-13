/*
Write a program to accept integer values of base and index and calculate power of base to
index.
Input: base: 2 index:5 
Output: 32

Input: base: 8 index: 3
Output: 512
*/

#include <stdio.h>

int main() 
{
    int base, index, result = 1;

    // Ask the user to input the base and index
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the index (exponent): ");
    scanf("%d", &index);

    // Calculate the power using a loop
    for (int i = 1; i <= index; i++) 
	{
        result *= base; // Multiply result by base, index number of times
    }

    // Print the result
    printf("%d^%d = %d\n", base, index, result);

    return 0;
}

