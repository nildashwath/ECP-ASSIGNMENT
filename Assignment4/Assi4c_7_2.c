/*
Without using global variables
*/

#include <stdio.h>

// Function to calculate sum and product
void calculateSumAndProduct(int a, int b, int *sumResult, int *productResult) 
{
    *sumResult = a + b;          // Calculate the sum and store it in the location pointed to by 'sumResult'
    *productResult = a * b;      // Calculate the product and store it in the location pointed to by 'productResult'
}

int main() 
{
    int num1, num2;
    int sum, product;

    // Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to calculate sum and product
    calculateSumAndProduct(num1, num2, &sum, &product);

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
