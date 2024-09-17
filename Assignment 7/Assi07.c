/*
Write a program to accept list of names as command line arguments and display the names.
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    // argc stores the number of command-line arguments
    // argv is an array that stores the arguments as strings

    // Check if any names were provided (argc should be more than 1)
    if (argc < 2) {
        printf("Please provide some names as command-line arguments.\n");
        return 1;  // Exit the program if no names were provided
    }

    // Print the provided names
    printf("The provided names are:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);  // Print each name
    }

    return 0;  // End of the program
}
