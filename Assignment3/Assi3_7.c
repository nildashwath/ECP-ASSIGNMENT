/*
Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24
*/

#include <stdio.h>

int main() 
{
    int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Unique pairs of factors that multiply to %d:\n", num);

    // Loop through numbers from 1 to square root of num to find factor pairs
    for (int i = 1; i <= num / 2; i++) 
	{
        if (num % i == 0) 
		{ // Check if i is a factor of num
            int j = num / i; // The paired factor
            printf("%d * %d = %d\n", i, j, num);
        }
    }

    return 0;
}

