/*
Write a program to find maximum of three numbers using 
if else
*/
#include <stdio.h>

int main() {
    int num1, num2, num3;

    //user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum of the three numbers using if-else
    if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is %d\n", num2);
    } else {
        printf("The maximum number is %d\n", num3);
    }

    return 0;
}


