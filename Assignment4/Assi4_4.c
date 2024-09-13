/*
In above program, division may fail if denominator is zero. Use global variable as an error flag to avoid this problem.
*/

#include <stdio.h>

// Global variable to store error status (0 = no error, 1 = error)
int error_flag = 0;

// Function to perform basic calculations
float calculator(float num1, float num2, char operator) 
{
    float result = 0;  // Initialize result to 0

    // Check which operator the user has entered and perform the calculation
    if (operator == '+') {
        result = num1 + num2;  // Addition
    } 
	else if (operator == '-') 
	{
        result = num1 - num2;  // Subtraction
    } 
	else if (operator == '*') 
	{
        result = num1 * num2;  // Multiplication
    } 
	else if (operator == '/') 
	{
        if (num2 != 0) 
		{
            result = num1 / num2;  // Division if num2 is not zero
        } 
		else 
		{
            error_flag = 1;  // Set error flag for division by zero
        }
    } 
	else 
	{
        error_flag = 1;  // Set error flag for invalid operator
    }

    return result;
}

int main() 
{
    float num1, num2, result;
    char operator;

    // Get the first number from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Get the operator (+, -, *, /) from the user
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note: Space before %c to avoid input problems

    // Get the second number from the user
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Call the calculator function to perform the operation
    result = calculator(num1, num2, operator);

    // Check if an error occurred (division by zero or invalid operator)
    if (error_flag == 1) 
	{
        printf("Error: Invalid operation (either division by zero or wrong operator).\n");
    } else {
        // Display the result if no error occurred
        printf("The result of %.2f %c %.2f is: %.2f\n", num1, operator, num2, result);
    }

    return 0;
}

