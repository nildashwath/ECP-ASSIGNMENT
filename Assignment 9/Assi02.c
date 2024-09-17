/*
Write a function to read a file character by character and copy the contents to another file. Source file pointer and Destination file pointers should be arguments to the function. Use the function to copy the file to destination file, display contents of the file, accept data from user and write to destination file
*/

#include <stdio.h>

// Function to copy content from source file to destination file
void copyFile(FILE *source, FILE *destination) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char userInput[1000];  // Buffer to hold user input for writing to the file

    // Get the source filename from the user
    printf("Enter the source filename: ");
    fgets(sourceFilename, sizeof(sourceFilename), stdin);
    sourceFilename[strcspn(sourceFilename, "\n")] = '\0';  // Remove newline character

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Get the destination filename from the user
    printf("Enter the destination filename: ");
    fgets(destinationFilename, sizeof(destinationFilename), stdin);
    destinationFilename[strcspn(destinationFilename, "\n")] = '\0';  // Remove newline character

    // Open the destination file in write mode (creates a new file or truncates existing one)
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file
    copyFile(sourceFile, destinationFile);

    // Close the files after copying
    fclose(sourceFile);
    fclose(destinationFile);

    // Reopen the destination file in read mode to display its contents
    destinationFile = fopen(destinationFilename, "r");
    if (destinationFile == NULL) {
        printf("Error reopening destination file.\n");
        return 1;
    }

    printf("Contents of the destination file:\n");
    char ch;
    while ((ch = fgetc(destinationFile)) != EOF) {
        putchar(ch);  // Display the character on the screen
    }
    printf("\n");

    // Close the destination file after displaying contents
    fclose(destinationFile);

    // Get user input to write to the destination file
    printf("Enter data to append to the destination file (end with an empty line):\n");
    FILE *appendFile = fopen(destinationFilename, "a");  // Open file in append mode
    if (appendFile == NULL) {
        printf("Error opening destination file for appending.\n");
        return 1;
    }

    while (fgets(userInput, sizeof(userInput), stdin) != NULL) {
        if (userInput[0] == '\n') {  // Stop when an empty line is entered
            break;
        }
        fputs(userInput, appendFile);  // Write user input to the destination file
    }

    // Close the append file
    fclose(appendFile);

    // Reopen and display the updated contents of the destination file
    destinationFile = fopen(destinationFilename, "r");
    if (destinationFile == NULL) {
        printf("Error reopening destination file.\n");
        return 1;
    }

    printf("Updated contents of the destination file:\n");
    while ((ch = fgetc(destinationFile)) != EOF) {
        putchar(ch);  // Display the updated character on the screen
    }
    printf("\n");

    // Close the destination file
    fclose(destinationFile);

    return 0;
}

