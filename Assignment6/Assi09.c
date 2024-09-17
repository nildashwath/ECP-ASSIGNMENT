/*
Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),
strcat(), strcpy(), etc.].
Input :
Source : This is test time
Find
: is
Replace: was
Output:
Thwas was test time
*/
#include <stdio.h>
#include <string.h>

// Function to find and replace all occurrences of a substring
void findAndReplace(char *source, const char *find, const char *replace) {
    char temp[1000];  // Buffer to hold the result
    char *pos;
    int findLen = strlen(find);
    int replaceLen = strlen(replace);
    
    // Initialize the result buffer
    temp[0] = '\0';

    // Loop through the source string
    while ((pos = strstr(source, find)) != NULL) {
        // Copy everything before the found substring into temp
        strncpy(temp, source, pos - source);
        temp[pos - source] = '\0';  // Null-terminate the temp string
        
        // Append the replacement substring
        strcat(temp, replace);
        
        // Move source pointer past the found substring
        source = pos + findLen;
        
        // Append the rest of the source string to temp
        strcat(temp, source);
    }
    
    // Copy the final result back to source
    strcpy(source, temp);
}

int main() {
    char source[1000];
    char find[100];
    char replace[100];
    
    // Input source string
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';  // Remove newline character from input
    
    // Input the substring to find
    printf("Enter the substring to find: ");
    fgets(find, sizeof(find), stdin);
    find[strcspn(find, "\n")] = '\0';  // Remove newline character from input
    
    // Input the replacement substring
    printf("Enter the replacement substring: ");
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';  // Remove newline character from input

    // Call the function to find and replace
    findAndReplace(source, find, replace);
    
    // Output the modified source string
    printf("Modified string: %s\n", source);

    return 0;
}

