/*
Write a program to print the tables of the numbers from 1 to 10.
*/

#include <stdio.h>

int main() 
{
    int i, j;

    // Loop through each number from 1 to 10
    for (i = 1; i <= 10; i++) 
	{
        printf("Table for %d:\n", i);

        // Loop through each multiplier from 1 to 10
        for (j = 1; j <= 10; j++) 
		{
            printf("%d x %d = %d\n", i, j, i * j);
        }

        // Print a blank line for better readability
        printf("\n");
    }

    return 0;
}

