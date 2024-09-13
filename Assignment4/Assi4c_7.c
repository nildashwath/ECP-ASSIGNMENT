/*
Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
*/

#include <stdio.h>

// Global variables to store the results
int sum;
int product;

// Function to calculate sum and product
void calculateSumAndProduct(int a, int b) 
{
    sum = a + b;          // Calculate the sum and store it in the global variable 'sum'
    product = a * b;      // Calculate the product and store it in the global variable 'product'
}

int main() 
{
    int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to calculate sum and product
    calculateSumAndProduct(num1, num2);

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
