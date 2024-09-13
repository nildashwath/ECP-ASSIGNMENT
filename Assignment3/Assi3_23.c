#include <stdio.h>

// Function to calculate factorial
int factorial(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++) 
	{
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient
int binomialCoefficient(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
	{
        // Print leading spaces for formatting
        for (int j = 0; j < rows - i - 1; j++) 
		{
            printf("   ");
        }
        // Print the Pascal's Triangle values
        for (int j = 0; j <= i; j++) 
		{
            printf("%4d", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() 
{
    int numRows;

    // Get the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    // Print Pascal's Triangle
    printPascalsTriangle(numRows);

    return 0;
}

