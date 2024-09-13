/*
Write a function to accept array elements from the user. Write another function to print array elements. Re-use these functions in rest of the assignments wherever required.
*/

#include <stdio.h>

// Function to accept array elements from the user
void acceptArray(int arr[], int size) 
{
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each number into the array
    }
}

// Function to print array elements
void printArray(int arr[], int size) 
{
    printf("The numbers are:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]); // Print each number
    }
    printf("\n"); // Print a newline for better formatting
}

int main() 
{
    int size = 5; // Number of elements in the array
    int arr[size]; // Declare the array

    // Call the functions to accept and print the array elements
    acceptArray(arr, size); // Get numbers from the user
    printArray(arr, size);  // Print the numbers

    return 0;
}
