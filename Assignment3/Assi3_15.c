/*
Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/

#include <stdio.h>

int main() 
{
    int choice;
    float num1, num2, result;

    do 
	{
        // Display the menu
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Check if the user wants to exit
        if (choice == 5) 
		{
            printf("Exiting the program.\n");
            break; // Exit the loop
        }

        // Prompt user for numbers
        if (choice >= 1 && choice <= 4) 
		{
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            // Perform the chosen operation
            switch (choice) 
			{
                case 1: // Addition
                    result = num1 + num2;
                    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                    break;
                case 2: // Subtraction
                    result = num1 - num2;
                    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                    break;
                case 3: // Multiplication
                    result = num1 * num2;
                    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                    break;
                case 4: // Division
                    
					if (num2 != 0) 
					{
                        result = num1 / num2;
                        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                    } 
					else 
					{
                        printf("Error: Division by zero is not allowed.\n");
                    }

                    break;

                default:
                    printf("Invalid choice. Please choose a valid option.\n");
                    break;
            }
        } 
		else if (choice != 5) 
		{
            printf("Invalid choice. Please choose a valid option.\n");
        }

    } 
	while (choice != 5);

    return 0;
}
  
