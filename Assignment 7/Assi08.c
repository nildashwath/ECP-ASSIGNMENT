/*
Modify above program to display names in sorted order.
*/
#include <stdio.h>
#include <string.h>

// Function to sort names in alphabetical order
void sortNames(char* names[], int count) {
    char* temp;
    // Loop to go through each name
    for (int i = 0; i < count - 1; i++) {
        // Loop to compare names
        for (int j = i + 1; j < count; j++) {
            // Compare two names
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names if they are in the wrong order
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main(int argc, char* argv[]) {
    // Check if at least one name was provided
    if (argc < 2) {
        printf("Please provide some names as command-line arguments.\n");
        return 1;  // Exit the program if no names were provided
    }

    // Sort the names (argv + 1 skips the program name itself)
    sortNames(argv + 1, argc - 1);

    // Print the sorted names
    printf("The sorted names are:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);  
    }

    return 0;
}

