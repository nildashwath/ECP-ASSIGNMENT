/*
1. Write a program to read a file character by character and display its content on screen.
*/

#include <stdio.h>

int main() {
    FILE *file;           // Pointer to the file
    char filename[100];   // Buffer to store the filename
    char ch;              // Variable to store each character read from the file

    // Ask the user for the filename
    printf("Enter the filename to read: ");
    fgets(filename, sizeof(filename), stdin);

    // Remove the newline character from the filename if it exists
    for(int i = 0; filename[i] != '\0'; i++) {
        if(filename[i] == '\n') {
            filename[i] = '\0';
            break;
        }
    }

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display the file character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display the character on the screen
    }

    // Close the file
    fclose(file);

    return 0;
}

