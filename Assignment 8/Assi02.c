/*
Write a function to accept student information from the user. Write another function to print student’s information. Re-use these functions in rest of the assignments wherever required.
*/

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;   // To store the student's roll number
    char name[100];   // To store the student's name
    float marks;      // To store the student's marks
};

// Function to accept student information from the user
void acceptStudentInfo(struct Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    // Clear the input buffer to avoid issues with reading the name
    getchar();  // This clears the newline character left by scanf

    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);

    // Remove newline character if it is read by fgets
    student->name[strcspn(student->name, "\n")] = '\0';

    printf("Enter marks: ");
    scanf("%f", &student->marks);
}

// Function to print student information
void printStudentInfo(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
}

int main() {
    struct Student student;  // Create a variable of type Student

    // Call the function to accept student information
    acceptStudentInfo(&student);

    // Call the function to print student information
    printStudentInfo(&student);

    return 0;
}

