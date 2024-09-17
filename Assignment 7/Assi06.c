/*
Write functions to allocate memory for 2 dimensional matrix. Write another function to free the memory allocated for 2 dimensional matrix.
*/

#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D matrix
int** allocateMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));  // Allocate memory for rows
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));  // Allocate memory for each column in the row
    }
    return matrix;  // Return the pointer to the 2D matrix
}

// Function to free the memory of the 2D matrix
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);  // Free each row
    }
    free(matrix);  // Free the array of pointers (rows)
}

// Function to input values into the matrix
void inputMatrix(int** matrix, int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);  // Store each element
        }
    }
}

// Function to print the matrix
void printMatrix(int** matrix, int rows, int cols) {
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);  // Print each element in the matrix
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;

    // Step 1: Allocate memory for the matrix
    int** matrix = allocateMatrix(rows, cols);

    // Step 2: Input the matrix values
    inputMatrix(matrix, rows, cols);

    // Step 3: Print the matrix
    printMatrix(matrix, rows, cols);

    // Step 4: Free the allocated memory
    freeMatrix(matrix, rows);

    return 0;
}

