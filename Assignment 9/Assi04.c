/*
Modify above program to accept source and target filenames as command line argumentModify above program to accept source and target filenames as command line arguments
*/

#include <stdio.h>

#define MAX_LINE_LENGTH 1000  // Maximum length for a line

// Function to copy content from source file to destination file line by line
void copyFileLineByLine(FILE *source, FILE *destination) {
    char line[MAX_LINE_LENGTH];  // Buffer to hold each line from the source file

    // Read each line from the source file
    while (fgets(line, sizeof(line), source) != NULL) {
        // Write the line to the destination file
        fputs(line, destination);
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;

    // Check if the user has provided exactly two filenames
    if (argc != 3) {
        printf("Usage: %s <source filename> <destination filename>\n", argv[0]);
        return 1;  // Exit the program with an error code
    }

    // Open the source file in read mode
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error opening source file: %s\n", argv[1]);
        return 1;  // Exit the program with an error code
    }

    // Open the destination file in write mode
    destinationFile = fopen(argv[2], "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file: %s\n", argv[2]);
        fclose(sourceFile);  // Close the source file before exiting
        return 1;  // Exit the program with an error code
    }

    // Copy content from the source file to the destination file
    copyFileLineByLine(sourceFile, destinationFile);

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copy completed successfully.\n");

    return 0;  // Exit the program with success code
}

