/*
Write a function to sort array of student’s information by roll number. Write another function to sort student’s information by name.
*/

#include <stdio.h>
#include <string.h>  // For strcmp function

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

// Function to sort students by roll number
void sortByRollNumber(struct Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                // Swap students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to sort students by name
void sortByName(struct Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Swap students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
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

    // Print student information before sorting
    printf("\nStudent information before sorting:\n");
    printStudentArray(students, numStudents);

    // Sort students by roll number and print
    sortByRollNumber(students, numStudents);
    printf("\nStudent information sorted by roll number:\n");
    printStudentArray(students, numStudents);

    // Sort students by name and print
    sortByName(students, numStudents);
    printf("\nStudent information sorted by name:\n");
    printStudentArray(students, numStudents);

    return 0;
}

