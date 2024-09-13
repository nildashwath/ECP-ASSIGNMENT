/*
Write a function to reverse the array elements.
*/

#include <stdio.h>

// Function to reverse the elements of an array
void reverseArray(int arr[], int size) 
{
    int start = 0;       // Start index
    int end = size - 1;  // End index
    int temp;            // Temporary variable for swapping

    // Loop to swap elements
    while (start < end) 
	{
        // Swap the elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

// Function to print the elements of an array
void printArray(int arr[], int size) 
{
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]); // Print each element
    }
    printf("\n"); // Newline for better formatting
}

int main() 
{
    int size = 5;           // Size of the array
    int arr[] = {1, 2, 3, 4, 5}; // Initialize the array with some values

    // Print the original array
    printf("Original array:\n");
    printArray(arr, size);

    // Reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    printf("Reversed array:\n");
    printArray(arr, size);

    return 0;
}

