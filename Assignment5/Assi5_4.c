/*
Write a function to calculate maximum of the array elements. Write another function to calculate maximum of the array elements.
*/

#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int size) 
{
    int max = arr[0]; // Start by assuming the first element is the maximum

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i]; // Update max if the current element is greater
        }
    }

    return max; // Return the maximum value
}

// Function to find the minimum element in an array
int findMin(int arr[], int size) 
{
    int min = arr[0]; // Start by assuming the first element is the minimum

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i]; // Update min if the current element is smaller
        }
    }

    return min; // Return the minimum value
}

// Function to get array elements from the user
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
        printf("%d ", arr[i]); // Print each element
    }
    printf("\n"); // Newline for formatting
}

int main() 
{
    int size = 5;       // Number of elements in the array
    int arr[size];      // Declare an array

    // Get array elements from the user
    acceptArray(arr, size);

    // Print the array elements
    printArray(arr, size);

    // Find and print the maximum and minimum values
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
