/*
Modify above program to accept number as command line arguments.
*/

#include <stdio.h>
#include <stdlib.h> // For atoi function

// Function to display a number in binary format
void displayBinary(int number) {
    // Array to store binary representation
    char binary[32 + 1]; // 32 bits for an int plus 1 for the null terminator
    int index = 0;

    // Handle the case when the number is zero
    if (number == 0) {
        printf("0");
        return;
    }

    // Convert the number to binary and store it in the array
    while (number > 0) {
        binary[index++] = (number % 2) ? '1' : '0'; // Store '1' or '0' in array
        number /= 2; // Divide the number by 2
    }

    // Print the binary representation in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }
}

int main(int argc, char *argv[]) {
    // Check if a command-line argument was provided
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1; // Return an error code
    }

    // Convert the command-line argument to an integer
    int number = atoi(argv[1]);

    // Call the function to display the number in binary format
    printf("Binary representation of %d is: ", number);
    displayBinary(number);

    return 0;
}

