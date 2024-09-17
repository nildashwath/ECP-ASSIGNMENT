/*
Write a structure to store school student information. The student result is one of the members of this information. Note that till 4th standard school follows grade scheme (A / B / C) and after 4th standard it follows percentage pattern. Accept the information of 3 students from the user and display it again.
*/

#include <stdio.h>

// Define a structure to store school student information
struct Student {
    int rollNumber;        // To store the student's roll number
    char name[100];        // To store the student's name
    int standard;          // To store the student's standard (grade)
    union {
        char grade;        // To store grade (A/B/C) for standards 1 to 4
        float percentage;  // To store percentage for standards 5 and above
    } result;
};

// Function to accept information of a student from the user
void acceptStudentInfo(struct Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    // Clear the input buffer
    getchar();  // This clears the newline character left by scanf

    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);

    // Remove newline character from the name if it exists
    student->name[strcspn(student->name, "\n")] = '\0';

    printf("Enter standard (1-12): ");
    scanf("%d", &student->standard);

    // Clear the input buffer
    getchar();  // This clears the newline character left by scanf

    // Accept result based on the standard
    if (student->standard <= 4) {
        printf("Enter grade (A/B/C): ");
        scanf("%c", &student->result.grade);
    } else {
        printf("Enter percentage (e.g., 85.5): ");
        scanf("%f", &student->result.percentage);
    }
}

// Function to print information of a student
void printStudentInfo(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Name: %s\n", student->name);
    printf("Standard: %d\n", student->standard);

    // Print result based on the standard
    if (student->standard <= 4) {
        printf("Grade: %c\n", student->result.grade);
    } else {
        printf("Percentage: %.2f%%\n", student->result.percentage);
    }
}

int main() {
    struct Student students[3];  // Create an array to hold information for 3 students

    // Accept information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
    }

    // Print information for each student
    for (int i = 0; i < 3; i++) {
        printStudentInfo(&students[i]);
    }

    return 0;
}
