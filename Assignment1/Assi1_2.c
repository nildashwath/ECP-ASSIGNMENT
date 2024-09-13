/*
Write a program to accept a number and print the number in character, decimal, octal and hex formats.
*/

#include <stdio.h>

int main() 
{
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the number in different formats

    // Character format
    printf("Character format: ");
    // Check if the number is a printable ASCII character
    if (num >= 32 && num<= 126) 
	{
        printf("%c\n", (char)num);
    }
	else 
	{
        printf("Not a printable ASCII character\n");
    }

    // Decimal format
    printf("Decimal format: %d\n", num);

    // Octal format
    printf("Octal format: %o\n", num);

    // Hexadecimal format
    printf("Hexadecimal format: %X\n", num);

    return 0;
}

