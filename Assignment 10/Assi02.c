/*
Write a function to display given number in binary format.
*/

#include <stdio.h>

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

int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function to display the number in binary format
    printf("Binary representation of %d is: ", number);
    displayBinary(number);

    return 0;
}

