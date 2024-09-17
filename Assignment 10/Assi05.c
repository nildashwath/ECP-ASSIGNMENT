/*
Write a function to check whether given character is alphabet or not. If it is alphabet, perform its bitwise XOR operation with value 32 and observe the result
*/

#include <stdio.h>

// Function to check if a character is an alphabet and perform XOR with 32
void checkAndXorChar(char ch) {
    // Check if the character is an uppercase or lowercase letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an alphabet.\n", ch);

        // Perform bitwise XOR with 32 (0x20)
        char result = ch ^ 32;
        printf("Result of '%c' ^ 32 is '%c'.\n", ch, result);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }
}

int main() {
    char inputChar;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &inputChar);

    // Call the function to check and perform XOR operation
    checkAndXorChar(inputChar);

    return 0;
}

