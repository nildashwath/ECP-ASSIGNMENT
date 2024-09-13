/*
Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/

#include <stdio.h>

int main() 
{
    int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d (excluding %d): ", num, num);

    // Loop through numbers from 1 to num/2 to find factors
    for (int i = 1; i <= num / 2; i++) 
	{
        if (num % i == 0) 
		{ // Check if i is a factor of num
            printf("%d", i);
            if (i != num / 2) 
			{ // Print comma after the factor except the last one
                printf(", ");
            }
        }
    }

    printf("\n");
    return 0;
}

