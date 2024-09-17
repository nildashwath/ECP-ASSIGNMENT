/*
Write a function to accept array of student’s information from the user. Write another function to print the array student’s information. Re-use these functions in rest of the assignments wherever required.
*/

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int rollNumber;   // To store the student's roll number
    char name[100];   // To store the student's name
    float marks;      // To store the student's marks
};

// Function to accept an array of student information from the user
void acceptStudentArray(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        // Clear the input buffer to avoid issues with reading the name
        getchar();  // This clears the newline character left by scanf

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove newline character if it is read by fgets
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Clear the input buffer for the next iteration
        getchar();  // This clears the newline character left by scanf
    }
}

// Function to print an array of student information
void printStudentArray(const struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d Information:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    int numStudents;

    // Get the number of students from the user
    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    // Create an array to hold the student information
    struct Student students[numStudents];

    // Call the function to accept student information
    acceptStudentArray(students, numStudents);

    // Call the function to print student information
    printStudentArray(students, numStudents);

    return 0;
}

