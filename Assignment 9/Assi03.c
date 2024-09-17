/*
Write a function to read a file line by line and copy the contents to another file.
*/

#include <stdio.h>

// Function to copy content from source file to destination file line by line
void copyFileLineByLine(FILE *source, FILE *destination) {
    char line[1000];  // Buffer to store each line from the source file

    // Read each line from the source file
    while (fgets(line, sizeof(line), source) != NULL) {
        // Write the line to the destination file
        fputs(line, destination);
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];

    // Get the source filename from the user
    printf("Enter the source filename: ");
    fgets(sourceFilename, sizeof(sourceFilename), stdin);
    sourceFilename[strcspn(sourceFilename, "\n")] = '\0';  // Remove newline character

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;  // Exit with error code
    }

    // Get the destination filename from the user
    printf("Enter the destination filename: ");
    fgets(destinationFilename, sizeof(destinationFilename), stdin);
    destinationFilename[strcspn(destinationFilename, "\n")] = '\0';  // Remove newline character

    // Open the destination file in write mode (create a new file or overwrite existing one)
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);  // Close the source file before exiting
        return 1;  // Exit with error code
    }

    // Copy content from source file to destination file line by line
    copyFileLineByLine(sourceFile, destinationFile);

    // Close the source and destination files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copy completed successfully.\n");

    return 0;  // Exit with success code
}

