/*
Write functions to calculate addition, subtraction, multiply two matrices of 3x3.
*/

#include <stdio.h>

// Function to accept a 3x3 matrix from the user
void acceptMatrix(int matrix[3][3]) {
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);  // Input matrix elements
        }
    }
}

// Function to print a 3x3 matrix
void printMatrix(int matrix[3][3]) {
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);  // Print each element
        }
        printf("\n");  // Move to the next row
    }
}

// Function to add two 3x3 matrices
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];  // Add corresponding elements
        }
    }
}

// Function to subtract two 3x3 matrices
void subtractMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];  // Subtract corresponding elements
        }
    }
}

// Function to multiply two 3x3 matrices
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;  // Initialize result to 0
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];  // Multiply rows and columns
            }
        }
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Accepting the first matrix
    printf("Matrix 1:\n");
    acceptMatrix(matrix1);

    // Accepting the second matrix
    printf("Matrix 2:\n");
    acceptMatrix(matrix2);

    // Matrix Addition
    addMatrices(matrix1, matrix2, result);
    printf("\nResult of Matrix Addition:\n");
    printMatrix(result);

    // Matrix Subtraction
    subtractMatrices(matrix1, matrix2, result);
    printf("\nResult of Matrix Subtraction:\n");
    printMatrix(result);

    // Matrix Multiplication
    multiplyMatrices(matrix1, matrix2, result);
    printf("\nResult of Matrix Multiplication:\n");
    printMatrix(result);

    return 0;
}

