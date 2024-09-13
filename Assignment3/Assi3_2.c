/*
Write a program to print table of given number.
Input: 9
Output:
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 5 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90
*/
#include <stdio.h>

int main() 
{
    int num;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

