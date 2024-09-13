/*
Write a function to swap two numbers.
*/

#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b) 
{
    int temp;  // A temporary variable to help with swapping

    // Swap the values using the temporary variable
    temp = *a;  // Save the value of 'a' in 'temp'
    *a = *b;    // Copy the value of 'b' to 'a'
    *b = temp;  // Copy the value stored in 'temp' to 'b'
}

int main() 
{
    int num1, num2;

    // Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the swap function to exchange the values of num1 and num2
    swap(&num1, &num2);

    // Print the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
