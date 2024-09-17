/*
Write a function to search student’s information by roll number. Write another function to
search student’s information by name. (linear search)
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

// Function to search for a student by roll number
void searchByRollNumber(const struct Student students[], int count, int rollNumber) {
    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("\nStudent found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
}

// Function to search for a student by name
void searchByName(const struct Student students[], int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("\nStudent found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student with name \"%s\" not found.\n", name);
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

    // Search for a student by roll number
    int rollNumberToSearch;
    printf("\nEnter roll number to search: ");
    scanf("%d", &rollNumberToSearch);
    searchByRollNumber(students, numStudents, rollNumberToSearch);

    // Search for a student by name
    char nameToSearch[100];
    getchar();  // Clear the newline character left by scanf
    printf("\nEnter name to search: ");
    fgets(nameToSearch, sizeof(nameToSearch), stdin);
    nameToSearch[strcspn(nameToSearch, "\n")] = '\0';  // Remove the newline character
    searchByName(students, numStudents, nameToSearch);

    return 0;
}

