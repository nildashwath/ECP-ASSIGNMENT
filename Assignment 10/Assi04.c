/*
Write a function to check whether a given byte has even parity. If not set MSB bit to make it
even parity.
*/

#include <stdio.h>

// Function to check if a byte has even parity and adjust if necessary
unsigned char ensureEvenParity(unsigned char byte) {
    int count = 0;

    // Count the number of 1 bits in the byte
    for (int i = 0; i < 8; i++) {
        if (byte & (1 << i)) {
            count++; // Increment count if the bit is 1
        }
    }

    // Check if the count of 1 bits is even
    if (count % 2 == 0) {
        // Byte already has even parity
        return byte;
    } else {
        // Byte has odd parity, set MSB to 1 to make it even
        return byte | (1 << 7); // Set the most significant bit to 1
    }
}

int main() {
    unsigned char byte;

    // Input a byte value from the user
    printf("Enter a byte value (0-255): ");
    scanf("%hhu", &byte);

    // Call the function to ensure even parity
    unsigned char result = ensureEvenParity(byte);

    // Print the result
    printf("Original byte: %u (0x%02X)\n", byte, byte);
    printf("Byte with even parity: %u (0x%02X)\n", result, result);

    return 0;
}

