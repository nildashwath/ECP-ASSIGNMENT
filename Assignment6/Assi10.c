/*
Write a function to find and replace a string without using library functions
*/

#include <stdio.h>

void findAndReplace(char *str, char *find, char *replace) {
    char result[100]; // Buffer to store the modified string
    int i, j, k;
    int findLen = 0, replaceLen = 0;

    // Calculate lengths of find and replace strings
    for (findLen = 0; find[findLen] != '\0'; findLen++);
    for (replaceLen = 0; replace[replaceLen] != '\0'; replaceLen++);

    int resIndex = 0; // Index for result array

    for (i = 0; str[i] != '\0'; i++) {
        // Check if the substring matches
        for (j = 0; str[i + j] == find[j] && find[j] != '\0'; j++);

        // If a match is found
        if (j == findLen) {
            // Copy the replace string into result
            for (k = 0; k < replaceLen; k++, resIndex++) {
                result[resIndex] = replace[k];
            }
            // Move i forward to skip the found substring
            i += findLen - 1;
        } else {
            // Copy the current character from the original string to result
            result[resIndex++] = str[i];
        }
    }

    result[resIndex] = '\0'; // Null-terminate the result string

    // Copy result back to the original string
    for (i = 0; result[i] != '\0'; i++) {
        str[i] = result[i];
    }
    str[i] = '\0'; // Null-terminate the original string
}

int main() {
    char str[100] = "Hey everyone, my name is  Peter.";
    char find[] = "Peter";
    char replace[] = "Nilanshu";

    printf("Original string: %s\n", str);

    findAndReplace(str, find, replace);

    printf("Modified string: %s\n", str);

    return 0;
}

