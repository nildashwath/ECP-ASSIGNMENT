/*
Write a function to remove all occurrences of any character in string1 from the string2.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a character is in string1
bool isCharInString(const char *string1, char ch) {
    while (*string1) {
        if (*string1 == ch) {
            return true;  // Character found in string1
        }
        string1++;
    }
    return false;  // Character not found in string1
}

// Function to remove all occurrences of characters in string1 from string2
void removeChars(char *string2, const char *string1) {
    int i = 0, j = 0;

    // Loop through each character in string2
    while (string2[i] != '\0') {
        // If character in string2 is not in string1, copy it to new position
        if (!isCharInString(string1, string2[i])) {
            string2[j] = string2[i];
            j++;
        }
        i++;
    }

    // Add null terminator at the end of the modified string
    string2[j] = '\0';
}

int main() {
    char string2[] = "Hello, Everyone...!";
    const char string1[] = "o, ";

    printf("Original string2: %s\n", string2);

    removeChars(string2, string1);

    printf("String2 after removing characters in string1: %s\n", string2);

    return 0;
}

