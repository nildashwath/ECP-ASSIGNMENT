/*
Write a function to print a given character for a given number of times.
*/

#include <stdio.h>

// Function to print a character 'times' number of times
void printCharacter(char character, int times) 
{
    // Loop to print the character 'times' times
    for (int i = 0; i < times; i++) 
	{
        printf("%c", character);  // Print the character without a newline
    }
    printf("\n");  // After printing, move to the next line
}

int main() 
{
    char ch;
    int count;

    // Ask the user to input a character
    printf("Enter a character to print: ");
    scanf("%c", &ch);

    // Ask the user how many times to print the character
    printf("Enter how many times to print the character: ");
    scanf("%d", &count);

    // Call the function to print the character the given number of times
    printCharacter(ch, count);

    return 0;  // End of the program
}
