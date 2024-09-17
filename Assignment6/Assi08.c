/*
Write a function to print a given number in words.
*/

#include <stdio.h>
#include <string.h>

// Function to convert numbers less than 20 to words
void convertBelowTwenty(int num, char *result) {
    const char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                            "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
                            "Eighteen", "Nineteen"};
    strcpy(result, words[num]); // Copy the word corresponding to the number into result
}

// Function to convert numbers between 20 and 99 to words
void convertTens(int num, char *result) {
    const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if (num < 20) {
        convertBelowTwenty(num, result); // Use the function for numbers less than 20
    } else {
        char temp[50];
        strcpy(temp, tens[num / 10]); // Get the word for the tens place
        if (num % 10 != 0) {
            strcat(temp, " "); // Add a space if there is a unit part
            convertBelowTwenty(num % 10, temp + strlen(temp)); // Add the units part
        }
        strcpy(result, temp); // Copy the final word into result
    }
}

// Main function to convert any number up to 9999 to words
void numberToWords(int num, char *result) {
    char buffer[100];

    if (num == 0) {
        strcpy(result, "Zero"); // Special case for zero
        return;
    }

    result[0] = '\0'; // Initialize the result string

    if (num / 1000 > 0) {
        convertBelowTwenty(num / 1000, buffer);
        strcat(result, buffer); // Add thousand part
        strcat(result, " Thousand ");
        num %= 1000;
    }

    if (num / 100 > 0) {
        convertBelowTwenty(num / 100, buffer);
        strcat(result, buffer); // Add hundred part
        strcat(result, " Hundred ");
        num %= 100;
    }

    if (num > 0) {
        if (num < 20) {
            convertBelowTwenty(num, buffer);
        } else {
            convertTens(num, buffer);
        }
        strcat(result, buffer); // Add the remaining part
    }
}

int main() {
    int number;
    char result[100];

    printf("Enter a number (0-9999): ");
    scanf("%d", &number);

    if (number < 0 || number > 9999) {
        printf("Number out of range. Please enter a number between 0 and 9999.\n");
    } else {
        numberToWords(number, result);
        printf("The number %d in words is: %s\n", number, result);
    }

    return 0;
}

