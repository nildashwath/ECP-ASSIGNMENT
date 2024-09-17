/*
Write a function to which accepts a number, base and character pointer and converts number to
a string i.e. simulate itoa().
*/

#include <stdio.h>
#include <stdlib.h>

// Function to convert a single digit to a character
char digitToChar(int digit) {
    if (digit >= 0 && digit <= 9) {
        return '0' + digit;  // Convert 0-9 to '0'-'9'
    } else {
        return 'A' + (digit - 10);  // Convert 10-15 to 'A'-'F'
    }
}

// Function to convert an integer to a string in a given base
char* itoa(int value, char *string, int base) {
    if (base < 2 || base > 16) {
        *string = '\0';  // Invalid base
        return string;
    }

    char buffer[33];  // Temporary buffer to handle the conversion (supports up to 32-bit integers)
    int i = 0;
    int isNegative = 0;

    // Handle special case for zero
    if (value == 0) {
        buffer[i++] = '0';
    }

    // Handle negative numbers only for base 10
    if (value < 0 && base == 10) {
        isNegative = 1;
        value = -value;  // Make value positive for processing
    }

    // Convert number to string in reverse order
    while (value > 0) {
        buffer[i++] = digitToChar(value % base);
        value /= base;
    }

    // Append negative sign for negative numbers
    if (isNegative) {
        buffer[i++] = '-';
    }

    // Null-terminate the string
    buffer[i] = '\0';

    // Reverse the string from buffer to output string
    int start = 0;
    int end = i - 1;
    while (start <= end) {
        string[start] = buffer[end];
        string[end] = buffer[start];
        start++;
        end--;
    }

    // Null-terminate the output string
    string[i] = '\0';

    return string;
}

int main() {
    char buffer[33];  // Buffer to hold the converted string

    // Test the itoa function with various numbers and bases
    printf("Decimal 1234: %s\n", itoa(1234, buffer, 10));
    printf("Decimal -1234: %s\n", itoa(-1234, buffer, 10));
    printf("Hexadecimal 1234: %s\n", itoa(1234, buffer, 16));
    printf("Binary 1234: %s\n", itoa(1234, buffer, 2));
    printf("Invalid base: %s\n", itoa(1234, buffer, 1));  // Should output an empty string

    return 0;
}

