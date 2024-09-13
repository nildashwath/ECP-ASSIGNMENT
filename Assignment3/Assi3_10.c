/*
Write a program to print table of given number.
*/

#include <stdio.h>

int main() 
{
    int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the multiplication table for the given number
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

