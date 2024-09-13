/*
Write a function to sort the array using selection or bubble sort.
*/

#include <stdio.h>

// Function to sort the array using selection sort
void selectionSort(int arr[], int size) 
{
    // Loop through each element in the array
    for (int i = 0; i < size - 1; i++) 
	{
        // Assume the first element in unsorted part is the smallest
        int minIndex = i;

        // Find the smallest element in the remaining unsorted part
        for (int j = i + 1; j < size; j++) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Swap the smallest found element with the first unsorted element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to sort the array using bubble sort
void bubbleSort(int arr[], int size) 
{
    // Loop through each element in the array
    for (int i = 0; i < size - 1; i++) 
	{
        // Flag to check if swapping happened
        int swapped = 0;

        // Compare each pair of adjacent elements
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Set flag to indicate that a swap occurred
                swapped = 1;
            }
        }

        // If no elements were swapped, the array is already sorted
        if (!swapped) 
		{
            break;
        }
    }
}

// Function to accept array elements from the user
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

    // Get numbers from the user
    acceptArray(arr, size);

    // Print the original array
    printf("Original array:\n");
    printArray(arr, size);

    // Sort the array using selection sort
    selectionSort(arr, size);
    printf("Array after selection sort:\n");
    printArray(arr, size);

    // Get new numbers from the user to demonstrate bubble sort
    printf("Enter %d new numbers for bubble sort:\n", size);
    acceptArray(arr, size);

    // Print the array before bubble sort
    printf("Array before bubble sort:\n");
    printArray(arr, size);

    // Sort the array using bubble sort
    bubbleSort(arr, size);
    printf("Array after bubble sort:\n");
    printArray(arr, size);

    return 0;
}
