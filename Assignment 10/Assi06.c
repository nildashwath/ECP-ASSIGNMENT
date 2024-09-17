/*
Write a function to swap two numbers using XOR operation
*/

#include <stdio.h>

// Function to swap two numbers using XOR
void xorSwap(int *a, int *b) {
    if (a != b) { // Check if they are not the same memory location
        *a = *a ^ *b; // Step 1: XOR a and b, store in a
        *b = *a ^ *b; // Step 2: XOR new a with b, store in b
        *a = *a ^ *b; // Step 3: XOR new a with new b, store in a
    }
}

int main() {
    int num1, num2;

    // Get two numbers from the user
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Swap the numbers
    xorSwap(&num1, &num2);

    // Show the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

