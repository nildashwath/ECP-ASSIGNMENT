/*
Write a function to calculate the sum of elements in the given row. Write another function to calculate the sum of elements in the given column.
*/

#include <stdio.h>

// Function to input values into a 3x3 matrix
void inputMatrix(int matrix[3][3]) {
    printf("Enter 9 numbers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);  // Taking input for each element
        }
    }
}

// Function to calculate the sum of elements in a specific row
int sumOfRow(int matrix[3][3], int row) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += matrix[row][j];  // Add all elements in the row
    }
    return sum;
}

// Function to calculate the sum of elements in a specific column
int sumOfColumn(int matrix[3][3], int col) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][col];  // Add all elements in the column
    }
    return sum;
}

int main() {
    int matrix[3][3];  // Define a 3x3 matrix
    int row, col;

    // Input matrix elements
    inputMatrix(matrix);

    // Get the row from the user
    printf("Enter the row number (0, 1, or 2) to calculate the sum: ");
    scanf("%d", &row);

    // Calculate and display the sum of that row
    int rowSum = sumOfRow(matrix, row);
    printf("The sum of row %d is: %d\n", row, rowSum);

    // Get the column from the user
    printf("Enter the column number (0, 1, or 2) to calculate the sum: ");
    scanf("%d", &col);

    // Calculate and display the sum of that column
    int colSum = sumOfColumn(matrix, col);
    printf("The sum of column %d is: %d\n", col, colSum);

    return 0;
}

