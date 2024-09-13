/*
   Write a program to crate four function calculator. Four functions are +, - , *, /
 */

#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() 
{
	int choice;
	float num1, num2, result;

	// Display the menu
	printf("Simple Calculator\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter your choice (1-4): ");
	scanf("%d", &choice);

	// Check for valid choice
	if (choice < 1 || choice > 4) 
	{
		printf("Invalid choice. Please enter a number between 1 and 4.\n");
		return 1; // Exit with an error code
	}

	// Ask the user to enter the numbers
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);

	// Perform the selected operation
	switch (choice) 
	{
		case 1:
			result = add(num1, num2);
			printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
			break;
		case 2:
			result = subtract(num1, num2);
			printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
			break;
		case 3:
			result = multiply(num1, num2);
			printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
			break;
		case 4:
			if (num2 != 0) {
				result = divide(num1, num2);
				printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
			} 

			else 
			{
				printf("Error: Division by zero is not allowed.\n");
			}
			break;
	}

	return 0;
}

// Function to add two numbers
float add(float a, float b) 
{
	return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) 
{
	return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) 
{
	return a * b;
}

// Function to divide two numbers
float divide(float a, float b) 
{
	return a / b;
}

