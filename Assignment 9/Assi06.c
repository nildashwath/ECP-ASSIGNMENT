/*
Write a menu driven program to make a student database. Make program readable by using
enumerations.
Write functions using binary file and unformatted I/O
a. Write student’s record to file.
b. Read student’s record from file.
c. Search of student’s record in a file by roll number.
d. Search student’s record by name.
e. Modify of student’s record in a file.
f. Remove of student’s record in a file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define DATABASE_FILE "student_database.dat"

// Enumeration for menu options
typedef enum {
    WRITE_RECORD = 1,
    READ_RECORD,
    SEARCH_BY_ROLL,
    SEARCH_BY_NAME,
    MODIFY_RECORD,
    REMOVE_RECORD,
    EXIT
} MenuOption;

// Define the structure for a student's record
typedef struct {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    float marks;
} Student;

// Function prototypes
void writeStudentRecord(FILE *file, Student student);
void readStudentRecord(FILE *file, Student *student);
void searchByRollNumber(int rollNumber);
void searchByName(const char *name);
void modifyRecord(int rollNumber);
void removeRecord(int rollNumber);
void printStudent(Student student);

int main() {
    int option;
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    Student student;

    while (1) {
        // Display menu
        printf("\nStudent Database Menu:\n");
        printf("1. Write Student Record\n");
        printf("2. Read Student Record\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Modify Student Record\n");
        printf("6. Remove Student Record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar();  // Consume newline character left by scanf

        switch (option) {
            case WRITE_RECORD:
                // Write student record to file
                FILE *writeFile = fopen(DATABASE_FILE, "ab"); // Open file in binary append mode
                if (writeFile == NULL) {
                    printf("Error opening file for writing.\n");
                    return 1;
                }
                printf("Enter roll number: ");
                scanf("%d", &student.rollNumber);
                getchar();  // Consume newline
                printf("Enter name: ");
                fgets(student.name, MAX_NAME_LENGTH, stdin);
                student.name[strcspn(student.name, "\n")] = '\0';  // Remove newline character
                printf("Enter marks: ");
                scanf("%f", &student.marks);
                writeStudentRecord(writeFile, student);
                fclose(writeFile);
                break;

            case READ_RECORD:
                // Read and display all student records from file
                FILE *readFile = fopen(DATABASE_FILE, "rb"); // Open file in binary read mode
                if (readFile == NULL) {
                    printf("Error opening file for reading.\n");
                    return 1;
                }
                printf("\nStudent Records:\n");
                while (fread(&student, sizeof(Student), 1, readFile)) {
                    printStudent(student);
                }
                fclose(readFile);
                break;

            case SEARCH_BY_ROLL:
                // Search for student by roll number
                printf("Enter roll number to search: ");
                scanf("%d", &rollNumber);
                searchByRollNumber(rollNumber);
                break;

            case SEARCH_BY_NAME:
                // Search for student by name
                printf("Enter name to search: ");
                getchar();  // Consume newline
                fgets(name, MAX_NAME_LENGTH, stdin);
                name[strcspn(name, "\n")] = '\0';  // Remove newline character
                searchByName(name);
                break;

            case MODIFY_RECORD:
                // Modify a student record
                printf("Enter roll number to modify: ");
                scanf("%d", &rollNumber);
                modifyRecord(rollNumber);
                break;

            case REMOVE_RECORD:
                // Remove a student record
                printf("Enter roll number to remove: ");
                scanf("%d", &rollNumber);
                removeRecord(rollNumber);
                break;

            case EXIT:
                // Exit the program
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to write a student record to a file
void writeStudentRecord(FILE *file, Student student) {
    fwrite(&student, sizeof(Student), 1, file);
}

// Function to read a student record from a file
void readStudentRecord(FILE *file, Student *student) {
    fread(student, sizeof(Student), 1, file);
}

// Function to search a student record by roll number
void searchByRollNumber(int rollNumber) {
    FILE *file = fopen(DATABASE_FILE, "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    Student student;
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.rollNumber == rollNumber) {
            printStudent(student);
            fclose(file);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
    fclose(file);
}

// Function to search a student record by name
void searchByName(const char *name) {
    FILE *file = fopen(DATABASE_FILE, "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    Student student;
    while (fread(&student, sizeof(Student), 1, file)) {
        if (strcmp(student.name, name) == 0) {
            printStudent(student);
            fclose(file);
            return;
        }
    }
    printf("Student with name '%s' not found.\n", name);
    fclose(file);
}

// Function to modify a student record
void modifyRecord(int rollNumber) {
    FILE *file = fopen(DATABASE_FILE, "r+b");
    if (file == NULL) {
        printf("Error opening file for reading/writing.\n");
        return;
    }

    Student student;
    long pos;
    while ((pos = ftell(file)) != -1 && fread(&student, sizeof(Student), 1, file)) {
        if (student.rollNumber == rollNumber) {
            printf("Enter new name: ");
            getchar();  // Consume newline
            fgets(student.name, MAX_NAME_LENGTH, stdin);
            student.name[strcspn(student.name, "\n")] = '\0';  // Remove newline character
            printf("Enter new marks: ");
            scanf("%f", &student.marks);
            fseek(file, pos, SEEK_SET);  // Go back to the correct position
            fwrite(&student, sizeof(Student), 1, file);  // Overwrite the existing record
            fclose(file);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
    fclose(file);
}

// Function to remove a student record
void removeRecord(int rollNumber) {
    FILE *file = fopen(DATABASE_FILE, "rb");
    FILE *tempFile = fopen("temp.dat", "wb");
    if (file == NULL || tempFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Student student;
    int found = 0;
    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.rollNumber == rollNumber) {
            found = 1;  // Record to be removed
            continue;
        }
        fwrite(&student, sizeof(Student), 1, tempFile);  // Copy all records except the one to remove
    }
    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(DATABASE_FILE);
        rename("temp.dat", DATABASE_FILE);
        printf("Record with roll number %d removed.\n", rollNumber);
    } else {
        printf("Student with roll number %d not found.\n", rollNumber);
        remove("temp.dat");  // Remove temporary file if no record was found
    }
}

// Function to print a student's record
void printStudent(Student student) {
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

