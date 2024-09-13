/*
Write a function to search the given number into the array using linear search and return the index of the element. If element is not found it should return -1.
*/

#include <stdio.h>

// Function to search for a number in the array using linear search
int linearSearch(int arr[], int size, int target) 
{
    // Go through each element in the array
    for (int i = 0; i < size; i++) 
	{
        // Check if the current element is the target number
        if (arr[i] == target) 
		{
            return i; // Return the index where the number was found
        }
    }
    return -1; // Return -1 if the number was not found in the array
}

// Function to get numbers from the user and fill the array
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
    int index;          // Index where the target is found

    // Get numbers from the user
    acceptArray(arr, size);

    // Print the array
    printf("Array:\n");
    printArray(arr, size);

    // Ask the user for the number they want to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Search for the number in the array
    index = linearSearch(arr, size, target);

    // Print the result
    if (index != -1) {
        printf("Number %d found at index %d.\n", target, index);
    } 
	else 
	{
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
