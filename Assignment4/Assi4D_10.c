/*
Read the prototypes of the library functions from the help documents.
a. printf()
c. sqrt()
b. scanf()
d. getchar()
*/

#include <stdio.h>
#include <math.h>  // Include this to use the sqrt function

int main() 
{
    double number, result;

    // Ask the user to enter a number
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    // Calculate the square root using sqrt
    result = sqrt(number);

    // Print the result
    printf("Square root of %.2lf is %.2lf\n", number, result);

    return 0;
}

