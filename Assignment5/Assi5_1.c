/*
Write a program to accept marks of five subjects, calculate its total and average.
*/

#include <stdio.h>

int main() 
{
    // Declare variables
    int marks[5];    // Array to store the marks of five subjects
    int total = 0;   // Variable to store the total of the marks
    float average;   // Variable to store the average of the marks

    // Get marks from the user
    printf("Enter the marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]); // Read the mark for each subject
        total += marks[i];      // Add this mark to the total
    }

    // Calculate the average
    average = total / 5.0; // Use 5.0 to make sure the result is a decimal number

    // Display the results
    printf("Total marks: %d\n", total);      // Print the total marks
    printf("Average marks: %.2f\n", average); // Print the average with 2 decimal places

    return 0;
}
