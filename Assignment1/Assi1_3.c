/*
Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/

#include <stdio.h>

int main() 
{
    char ch;
    int asciv;

    
    printf("Enter a character: ");

    scanf(" %c", &ch);  // Read a single character from the user

    // Convert the character to its ASCII value
    asciv= (int)ch;

    // Print the ASCII value in different formats
    printf("ASCII value of '%c':\n", ch);
    printf("Decimal format: %d\n", asciv);
    printf("Hexadecimal format: %X\n", asciv);
    printf("Octal format: %o\n", asciv);

    //User to enter a ASCII value
    printf("Enter an ASCII value (0 to 255): ");
    scanf("%d", &asciv);

    // Check if the ASCII value is valid
    if (asciv >= 0 && asciv<= 255) 
	{
        // Print the character for the given ASCII value
        printf("Character for ASCII value %d: '%c'\n", asciv, (char)asciv);
    } 

	else 
	{
        // Print an error message if the value is out of range
        printf("Invalid ASCII value. Please enter a value between 0 and 255.\n");
    }

    return 0;
}

