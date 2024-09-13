/*
Write a function to print Pascal triangle of given number of rows.
*/

#include <stdio.h>

// Function to print Pascal's Triangle
void printPascalTriangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
	{
        int number = 1;  // The first number in each row is always 1

        // Print leading spaces to format the triangle
        for (int space = 0; space < rows - i - 1; space++) 
		{
            printf(" ");
        }

        // Print the numbers in the current row
        for (int j = 0; j <= i; j++) 
		{
            printf("%d ", number);
            number = number * (i - j) / (j + 1);  // Update number to next value in the row
        }

        printf("\n");  // Move to the next line after each row
    }
}

int main() 
{
    int rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Call the function to print Pascal's Triangle
    printPascalTriangle(rows);

    return 0;
}
