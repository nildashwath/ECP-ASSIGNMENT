/*
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/

#include <stdio.h>

int main() 
{
    char ch;
    int num;

    // Ask the user to input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to handle any newline characters in the buffer

    // Ask the user to input the number of times to print the character
    printf("Enter the number of times to print the character: ");
    scanf("%d", &num);

    // Loop to print the character 'num' times
    for (int i = 0; i < num; i++) 
	{
        printf("%c", ch);
    }

    // Print a newline at the end
    printf("\n");

    return 0;
}

