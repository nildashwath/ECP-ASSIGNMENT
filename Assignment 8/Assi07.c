/*
Write a structure to store school student information. Note that assuming the records are
maintained till 12th standard student, standard field do not occupy more than 4 bits. Also
student gender can be stored as a single bit. Consider age to be maximum 32 years. Accept the information of 3 students from the user and display it again.
*/

#include <stdio.h>
#include <string.h>  // For string functions like fgets and strcspn

// Define a structure to store school student information with bit fields
struct Student {
    unsigned int rollNumber : 16; // Assuming roll number does not exceed 16 bits
    unsigned int standard : 4;    // Standard (1-12) requires 4 bits
    unsigned int age : 6;         // Age (0-31) fits in 6 bits
    unsigned int gender : 1;      // Gender (0 for male, 1 for female) fits in 1 bit
    char name[100];               // To store the student's name
};

// Function to accept information of a student from the user
void acceptStudentInfo(struct Student *student) {
    unsigned int rollNumber, standard, age, gender;

    printf("Enter roll number: ");
    scanf("%u", &rollNumber);
    student->rollNumber = rollNumber;

    printf("Enter standard (1-12): ");
    scanf("%u", &standard);
    student->standard = standard;

    printf("Enter age (0-31): ");
    scanf("%u", &age);
    student->age = age;

    printf("Enter gender (0 for male, 1 for female): ");
    scanf("%u", &gender);
    student->gender = gender;

    // Clear the input buffer
    getchar();  // This clears the newline character left by scanf

    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);
    
    // Remove newline character from the name if it exists
    student->name[strcspn(student->name, "\n")] = '\0';
}

// Function to print information of a student
void printStudentInfo(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %u\n", student->rollNumber);
    printf("Standard: %u\n", student->standard);
    printf("Age: %u\n", student->age);
    printf("Gender: %s\n", student->gender == 0 ? "Male" : "Female");
    printf("Name: %s\n", student->name);
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


