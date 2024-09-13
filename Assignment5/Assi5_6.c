/*
Write a function to remove duplicate elements from the array. After processing the array should store only the unique elements consecutively. Also function should return the number of unique elements into the array.
*/

#include <stdio.h>

// Function to remove duplicate elements from the array
int removeDuplicates(int arr[], int size) 
{
    int uniqueSize = 0; // Keep track of the number of unique elements

    // Go through each element in the array
    for (int i = 0; i < size; i++) 
	{
        int isDuplicate = 0; // Assume the element is not a duplicate

        // Check if the current element has appeared before
        for (int j = 0; j < uniqueSize; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                isDuplicate = 1; // Element is a duplicate
                break; // No need to check further
            }
        }

        // If the element is not a duplicate, add it to the unique list
        if (!isDuplicate) 
		{
            arr[uniqueSize] = arr[i]; // Add the element to the array
            uniqueSize++; // Increase the count of unique elements
        }
    }

    return uniqueSize; // Return the number of unique elements
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
        printf("%d ", arr[i]); // Print each number
    }
    printf("\n"); // Print a newline for better formatting
}

int main() 
{
    int size = 7;       // Number of elements in the array
    int arr[size];      // Declare an array

    // Get numbers from the user
    acceptArray(arr, size);

    // Print the original array
    printf("Original array:\n");
    printArray(arr, size);

    // Remove duplicates and get the number of unique elements
    int newSize = removeDuplicates(arr, size);

    // Print the array after removing duplicates
    printf("Array after removing duplicates:\n");
    printArray(arr, newSize);

    // Print the number of unique elements
    printf("Number of unique elements: %d\n", newSize);

    return 0;
}
