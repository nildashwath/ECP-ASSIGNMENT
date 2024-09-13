/*
Write a function to implement four function calculator. Function would take operands and operator as arguments and returns result.
*/
#include <stdio.h>

// Function to perform basic calculations
float calculator(float operand1, float operand2, char operator) 
{
    float result;

    // Check which operator is used and perform the corresponding operation
    if (operator == '+') 
	{
        result = operand1 + operand2;  // Addition
    } 
	else if (operator == '-') 
	{
        result = operand1 - operand2;  // Subtraction
    } 
	else if (operator == '*') 
	{
        result = operand1 * operand2;  // Multiplication
    } 
	else if (operator == '/') 
	{
        if (operand2 != 0) 
		{  // Check to avoid division by zero
            result = operand1 / operand2;  // Division
        } 
		else 
		{
            printf("Error: Division by zero is not allowed.\n");
            return 0;  // Return 0 if division by zero is attempted
        }
    } 
	else 
	{
        printf("Error: Invalid operator.\n");
        return 0;  // Return 0 if an invalid operator is entered
    }

    return result;
}

int main() 
{
    float num1, num2, result;
    char operator;

    // Ask the user to enter two numbers (operands)
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to handle whitespace

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Call the calculator function to get the result
    result = calculator(num1, num2, operator);

    // Display the result if no error occurred
    if (result != 0 || (operator == '/' && num2 == 0)) {
        printf("The result of %.2f %c %.2f is: %.2f\n", num1, operator, num2, result);
    }

    return 0;
}

