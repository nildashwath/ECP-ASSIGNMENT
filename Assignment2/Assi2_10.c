/*
Write a program to accept a character c and display category of the input character.

ALPHABET: c is a letter (65 to 90 or 97 to 122)

UPPERCASE: c is an uppercase letter (65 to 90)

LOWERCASE : c is a lowercase letter (97 to 122)

DIGIT: c is a digit (48 to 57)

SPACE: c is a space(32), tab(9), carriage return(13), new line(10)

OTHER: Not listed above
*/

#include <stdio.h>

int main() 
{
    char c;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Determine the category of the character
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) 
	{
        // Check if the character is a letter
        if (c >= 65 && c <= 90) 
		{
            printf("The character '%c' is an UPPERCASE letter.\n", c);
        } else 
		{
            printf("The character '%c' is a LOWERCASE letter.\n", c);
        }
    } 
	else if (c >= 48 && c <= 57) 
	{
        // Check if the character is a digit
        printf("The character '%c' is a DIGIT.\n", c);
    } 
	else if (c == 32 || c == 9 || c == 13 || c == 10) 
	{
        // Check if the character is a space, tab, carriage return, or new line
        if (c == 32) 
		{
            printf("The character '%c' is a SPACE.\n", c);
        } 
		else if (c == 9) 
		{
            printf("The character '%c' is a TAB.\n", c);
        } 
		else if (c == 13) 
		{
            printf("The character '%c' is a CARRIAGE RETURN.\n", c);
        } 
		else if (c == 10) 
		{
            printf("The character '%c' is a NEW LINE.\n", c);
        }
    } 
	else 
	{
        // Character does not match any of the above categories
        printf("The character '%c' is OTHER.\n", c);
    }

    return 0;
}

