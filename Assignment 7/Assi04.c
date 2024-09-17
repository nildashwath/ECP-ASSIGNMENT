/*
Write a function to calculate the sum of elements in the given row. Write another function to calculate the sum of elements in the given column.
*/

#include <stdio.h>
#include <string.h>

// Function to accept 5 student names from the user
void acceptNames(char names[5][20]) {
    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);  // Store each name in the 2D array
    }
}

// Function to print the student names
void printNames(char names[5][20]) {
    printf("\nThe student names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);  // Print each name
    }
}

// Function to sort the student names alphabetically
void sortNames(char names[5][20]) {
    char temp[20];  // Temporary string for swapping names
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            // If names[i] is greater than names[j], swap them
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][20];  // 2D array to store 5 names, each up to 19 characters

    // Step 1: Accept names from the user
    acceptNames(names);

    // Step 2: Print the names entered by the user
    printNames(names);

    // Step 3: Sort the names alphabetically
    sortNames(names);

    // Step 4: Print the sorted names
    printf("\nThe sorted student names are:\n");
    printNames(names);

    return 0;
}
