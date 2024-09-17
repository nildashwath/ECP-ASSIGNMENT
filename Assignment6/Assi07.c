/*
Write a function to convert a number to its roman equivalent. Also write a function to convert a
roman number to decimal equivalent.
*/

#include <stdio.h>
#include <string.h>

// Function to convert an integer to a Roman numeral
void intToRoman(int num, char *roman) {
    // Arrays to hold Roman numeral symbols and their corresponding values
    const char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Initialize the output string
    roman[0] = '\0';

    // Loop through each value and append the corresponding Roman numeral symbol
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(roman, romanNumerals[i]); // Append Roman numeral symbol
            num -= values[i]; // Subtract the value from the number
        }
    }
}

// Function to convert a Roman numeral to an integer
int romanToInt(const char *roman) {
    // Arrays to hold Roman numeral symbols and their corresponding values
    const char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    int result = 0;
    int i = 0;

    // Loop through the Roman numeral string
    while (*roman) {
        for (i = 0; i < 13; i++) {
            // Check if the current part of the Roman numeral matches a symbol
            if (strncmp(roman, romanNumerals[i], strlen(romanNumerals[i])) == 0) {
                result += values[i]; // Add the value to the result
                roman += strlen(romanNumerals[i]); // Move to the next part of the string
                break;
            }
        }
    }
    return result;
}

int main() {
    int choice, number;
    char roman[20];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Convert Integer to Roman Numeral\n");
        printf("2. Convert Roman Numeral to Integer\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an integer (1-3999): ");
                scanf("%d", &number);
                if (number < 1 || number > 3999) {
                    printf("Number out of range. Please enter a number between 1 and 3999.\n");
                } else {
                    intToRoman(number, roman);
                    printf("Roman numeral: %s\n", roman);
                }
                break;
            case 2:
                printf("Enter a Roman numeral: ");
                scanf("%s", roman);
                number = romanToInt(roman);
                printf("Integer value: %d\n", number);
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

