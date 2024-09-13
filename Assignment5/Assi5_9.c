/*
Write a function to search the given number into the array using binary search and return the index of the element. If element is not found it should return -1
*/

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) 
{
    int left = 0;           // Starting index of the array
    int right = size - 1;   // Ending index of the array

    // Loop until the search range is valid
    while (left <= right) 
	{
        int mid = left + (right - left) / 2; // Find the middle index

        // Check if the middle element is the target
        if (arr[mid] == target) 
		{
            return mid; // Target found at index mid
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) 
		{
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else 
		{
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

// Function to get numbers from the user
void acceptArray(int arr[], int size) 
{
    printf("Enter %d sorted numbers:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each number from the user
    }
}

// Function to print the array
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

    // Get sorted numbers from the user
    acceptArray(arr, size);

    // Print the array
    printf("Array:\n");
    printArray(arr, size);

    // Ask the user for the number they want to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Search for the number in the array
    index = binarySearch(arr, size, target);

    // Print the result
    if (index != -1) 
	{
        printf("Number %d found at index %d.\n", target, index);
    } 
	else 
	{
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
