/*
Write a function to implement four function calculator. The return value indicates the error (due to zero denominator in case of division). The result is returned via out-parameter.
*/

#include <stdio.h>

// Enum for error codes
typedef enum 
{
    NO_ERROR = 0,   // No error
    DIV_BY_ZERO = 1 // Division by zero error
} ErrorCode;

// Function to perform arithmetic operations
ErrorCode calculate(double a, double b, char operator, double *result) 
{
    switch (operator) 
	{
        case '+': // Addition
            *result = a + b;
            return NO_ERROR;
        case '-': // Subtraction
            *result = a - b;
            return NO_ERROR;
        case '*': // Multiplication
            *result = a * b;
            return NO_ERROR;
        case '/': // Division
            if (b == 0) 
			{ // Check for division by zero
                return DIV_BY_ZERO;
            }
            *result = a / b;
            return NO_ERROR;
        default: // Invalid operator
            return DIV_BY_ZERO;
    }
}

int main() 
{
    double num1, num2, result;
    char op;
    ErrorCode error;

    // Ask the user for input
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to skip any newline characters

    // Call the calculate function
    error = calculate(num1, num2, op, &result);

    // Check for errors and print the result
    if (error == NO_ERROR) 
	{
        printf("Result: %.2lf\n", result);
    } 
	else if (error == DIV_BY_ZERO) 
	{
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
