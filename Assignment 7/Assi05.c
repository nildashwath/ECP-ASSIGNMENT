/*
Write a function to accept five names of students from the user (use array of character pointers). Write another function to print these names. Write a function to sort student names. Finally write a function to free memory allocated for student names.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to accept 5 student names using dynamic memory allocation
void acceptNames(char *names[5]) {
    for (int i = 0; i < 5; i++) {
        names[i] = (char *)malloc(20 * sizeof(char));  // Allocate memory for each name
        if (names[i] == NULL) {
            printf("Memory allocation failed\n");
            exit(1);  // Exit if memory allocation fails
        }
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);  // Read the name from the user
    }
}

// Function to print the student names
void printNames(char *names[5]) {
    printf("\nThe student names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);  // Print each name
    }
}

// Function to sort student names alphabetically
void sortNames(char *names[5]) {
    char *temp;  // Temporary pointer for swapping names
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            // If names[i] is greater than names[j], swap them
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

// Function to free the allocated memory for each name
void freeMemory(char *names[5]) {
    for (int i = 0; i < 5; i++) {
        free(names[i]);  // Free the memory allocated for each name
    }
}

int main() {
    char *names[5];  // Array of 5 character pointers

    // Step 1: Accept names from the user
    acceptNames(names);

    // Step 2: Print the names entered by the user
    printNames(names);

    // Step 3: Sort the names alphabetically
    sortNames(names);

    // Step 4: Print the sorted names
    printf("\nThe sorted student names are:\n");
    printNames(names);

    // Step 5: Free the allocated memory
    freeMemory(names);

    return 0;
}

