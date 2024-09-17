/*Write a function to accept a 2-D array from the user. Write another function to print the 2-D array. Re-use these functions in rest of the assignments wherever required.*/

#include <stdio.h>

// Function to accept input for a 2D array
void accept2DArray(int rows, int cols, int arr[rows][cols]) {
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);  // Read an element from the user
        }
    }
}

// Function to print a 2D array
void print2DArray(int rows, int cols, int arr[rows][cols]) {
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);  // Print each element
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int rows, cols;

    // Ask the user for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array
    int array[rows][cols];

    // Call the function to accept the array from the user
    accept2DArray(rows, cols, array);

    // Call the function to print the array
    print2DArray(rows, cols, array);

    return 0;
}

