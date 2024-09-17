/*
Write a function to remove all occurrences of given character from the string.
*/

#include <stdio.h>

// Function to remove all occurrences of a given character
void removeChar(char *str, char charToRemove) {
    int i = 0, j = 0;

    // Loop through the string
    while (str[i] != '\0') {
        // If current character is not the one to remove, copy it to the new position
        if (str[i] != charToRemove) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    // Add null terminator at the end of the modified string
    str[j] = '\0';
}

int main() {
    char str[] = "Welcome to DESD!";
    char charToRemove = 'o';

    printf("Original string: %s\n", str);

    removeChar(str, charToRemove);

    printf("String after removing '%c': %s\n", charToRemove, str);

    return 0;
}

