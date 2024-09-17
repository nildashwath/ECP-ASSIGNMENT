/*
Declare a structure to store data for student information. The structure contains roll number, name, marks for students. Write a program to accept information of student from user and print the same.
*/
#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;   // To store the student's roll number
    char name[100];   // To store the student's name
    float marks;      // To store the student's marks
};

int main() {
    struct Student student;  // Create a variable of type Student

    // Get student information from the user
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    // Clear the input buffer
    getchar();  // This clears the newline left in the buffer by scanf

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);

    // Remove newline character from the name if it exists
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Print student information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
