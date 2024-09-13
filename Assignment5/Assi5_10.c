/*
Write a function to search the given number into the array using linear search and return the address of the element. If element is not found it should return NULL.
*/

#include <stdio.h>

// Function to search for a number in the array and return its address
int* linearSearch(int arr[], int size, int target) 
{
    // Loop through each element in the array
    for (int i = 0; i < size; i++) 
	{
        // Check if the current element is the target
        if (arr[i] == target) 
		{
            return &arr[i]; // Return the address of the element found
        }
    }
    return NULL; // Return NULL if the element is not found
}

// Function to get numbers from the user
void acceptArray(int arr[], int size) 
{
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each number from the user
    }
}

// Function to print the array elements
void printArray(int arr[], int size) 
{
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]); // Print each number
    }
    printf("\n"); // Print a new line for better formatting
}

int main() 
{
    int size = 5;       // Number of elements in the array
    int arr[size];      // Declare an array
    int target;         // Number to search for
    int* address;       // Pointer to store the address of the found element

    // Get numbers from the user
    acceptArray(arr, size);

    // Print the array
    printf("Array:\n");
    printArray(arr, size);

    // Ask the user for the number they want to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Search for the number in the array
    address = linearSearch(arr, size, target);

    // Print the result
    if (address != NULL) 
	{
        printf("Number %d found at address %p.\n", target, (void*)address);
    } 
	else 
	{
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
