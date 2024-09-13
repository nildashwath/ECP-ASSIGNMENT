/*
Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23
*/

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;  // 2 is the only even prime number
    if (num % 2 == 0) return 0;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int input, count = 0, num;

    // Ask the user to enter the number
    printf("Enter a number: ");
    scanf("%d", &input);

    // Start searching for prime numbers from the number after the given input
    num = input + 1;

    printf("First 5 prime numbers after %d are:\n", input);
    while (count < 5) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}

