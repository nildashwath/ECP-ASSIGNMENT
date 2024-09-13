/*
Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/

#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to calculate factorial
    printf("Factorial of %d: ", num);
    for (int i = 1; i <= num; i++) {
        factorial *= i; // Multiply each number in the range [1, num]
        printf("%d", i); // Print each number
        if (i < num) {
            printf(" * ");
        }
    }

    // Print the final result
    printf(" = %d\n", factorial);

    return 0;
}

