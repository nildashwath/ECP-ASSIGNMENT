/*
Write a function to calculate maximum and minimum of the array elements
*/

#include <stdio.h>

// Function to find both the maximum and minimum elements in an array
void findMaxMin(int arr[], int size, int *max, int *min) 
{
    *max = arr[0]; // Assume the first element is the maximum
    *min = arr[0]; // Assume the first element is the minimum

    // Loop through the array to find the max and min values
    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > *max) 
		{
            *max = arr[i]; // Update max if current element is larger
        }
        if (arr[i] < *min) 
		{
            *min = arr[i]; // Update min if current element is smaller
        }
    }
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
    printf("\n"); // Newline for better formatting
}

int main() 
{
    int size = 5;       // Number of elements in the array
    int arr[size];      // Declare an array
    int max, min;       // Variables to store maximum and minimum values

    // Get numbers from the user
    acceptArray(arr, size);

    // Print the array elements
    printArray(arr, size);

    // Find maximum and minimum values
    findMaxMin(arr, size, &max, &min);

    // Print the maximum and minimum values
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
