/*
Write a function to write student’s record to a text file using formatted I/O. i.e. fprintf. Write another function to read student’s record from a text file using formatted I/O. i.e. fscanf.
*/

#include <stdio.h>

#define MAX_NAME_LENGTH 100

// Define the structure for a student's record
typedef struct {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    float marks;
} Student;

// Function to write a student record to a file
void writeStudentRecord(FILE *file, Student student) {
    fprintf(file, "%d\n", student.rollNumber);
    fprintf(file, "%s\n", student.name);
    fprintf(file, "%.2f\n", student.marks);
}

// Function to read a student record from a file
void readStudentRecord(FILE *file, Student *student) {
    fscanf(file, "%d\n", &student->rollNumber);
    fscanf(file, "%[^\n]\n", student->name);
    fscanf(file, "%f\n", &student->marks);
}

int main() {
    Student student1 = {86944, "Nilanshu Dashwath", 89.8};
    Student student2;
    
    // Open a file to write the student record
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;  // Exit with an error code
    }
    writeStudentRecord(file, student1);  // Write the student record
    fclose(file);  // Close the file

    // Open the file to read the student record
    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;  // Exit with an error code
    }
    readStudentRecord(file, &student2);  // Read the student record
    fclose(file);  // Close the file

    // Print the student record to the screen
    printf("Student Record:\n");
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Marks: %.2f\n", student2.marks);

    return 0;  // Exit with success code
}

