/*1. Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()
l. strtok()*/

#include <stdio.h>
#include <string.h>  

int main() 
{
    
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50] = "Welcome to the world of DESD";
    char str5[50] = "Hello,World! DESD is great!";
    char *token;

    printf("Original strings:\nstr1 = \"%s\"\nstr2 = \"%s\"\nstr4 = \"%s\"\n", str1, str2, str4);

    // length of a string
    printf("\nLength of str1 = %lu\n", strlen(str1));

    // Copy one string to another
    strcpy(str3, str1);
    printf("Copy str1 to str3: str3 = \"%s\"\n", str3);

    //Concatenate two strings
    strcat(str1, str2);
    printf("Concatenate str1 and str2: str1 = \"%s\"\n", str1);

    // Compare two strings
    if (strcmp(str1, str2) == 0)
        printf("d. strcmp() - str1 and str2 are equal\n");
    else
        printf("d. strcmp() - str1 and str2 are not equal\n");

    // Compare two strings
     printf("Compare ignoring case (str1, str4): %d\n", stricmp(str1, str4));

    // Reverse a string
    printf("Reverse str2: %s\n", strrev(str2)); 

    // Find the first occurrence of a character in a string
    printf("First occurrence of 'o' in str4: %s\n", strchr(str4, 'o'));

    // Find the first occurrence of a substring in a string
    printf("Find \"World\" in str4: %s\n", strstr(str4, "World"));

    // Copy the first n characters of one string to another
    strncpy(str3, str2, 3);  // Copy first 3 characters of str2 to str3
    str3[3] = '\0';  // Null terminate the string
    printf("Copy first 3 characters of str2 to str3: str3 = \"%s\"\n", str3);

    // Concatenate the first n characters of one string to another
    strncat(str1, str2, 3);  // Concatenate first 3 characters of str2 to str1
    printf("Concatenate first 3 characters of str2 to str1: str1 = \"%s\"\n", str1);

    //Compare the first n characters of two strings
    if (strncmp(str1, str2, 3) == 0)
        printf("First 3 characters of str1 and str2 are equal\n");
    else
        printf("First 3 characters of str1 and str2 are not equal\n");

    //Tokenize a string based on a delimiter
    printf(" Tokenize str5 based on commas and spaces:\n");
    token = strtok(str5, ", ");
    while (token != NULL) {
        printf("\n%s\n", token);
        token = strtok(NULL, ", ");
    }

    return 0;
}

