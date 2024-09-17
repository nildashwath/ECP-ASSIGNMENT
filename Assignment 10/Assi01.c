/*
Write a function to count number of ‘1’ bits into a given number.
*/

#include <stdio.h>

// Function to count the number of '1' bits in an integer
int countOneBits(int number) {
    int count = 0;

    // Loop until the number becomes zero
    while (number) {
        // Increment count if the least significant bit is '1'
        count += (number & 1);
        // Right shift the number by 1 bit
        number >>= 1;
    }

    return count;
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and display the result
    int result = countOneBits(number);
    printf("Number of '1' bits in %d is %d\n", number, result);

    return 0;
}

