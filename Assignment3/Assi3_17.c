/*
Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/


#include <stdio.h>

int main() 
{
    int rows = 5;  // Number of rows
    int columns = 5;  // Number of columns

    // Loop through each row
    for (int i = 0; i < rows; i++) 
	{
        // Loop through each column
        for (int j = 0; j < columns; j++) 
		{
            printf("* ");  // Print an asterisk followed by a space
        }
        printf("\n");  // Move to the next line after printing all columns in a row
    }

    return 0;
}

