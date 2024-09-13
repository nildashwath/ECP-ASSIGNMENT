/*
Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables

DeptNo	DeptName	DsgnCode	Designation

	10	Marketing	 'M'		Manager
	
	20	Management	 'S'		Supervisor
	
	30	Sales		 's'		Security Officer

	40	Designing	'C'			Clerk

Example:
If input given is
Employee Id: 101

Dept No : 30

Designation Code : M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/

#include <stdio.h>

// Function prototypes
const char* getDepartmentName(int deptNo);
const char* getDesignationName(char dsgnCode);

int main() 
{
    int empId, deptNo;
    char dsgnCode;

    // Ask the user to enter employee details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Department Number (10, 20, 30, 40): ");
    scanf("%d", &deptNo);
    printf("Enter Designation Code (M, S, O, C): ");
    scanf(" %c", &dsgnCode); // Notice the space before %c to consume any leftover newline character

    // Get department and designation names
    const char* deptName = getDepartmentName(deptNo);
    const char* dsgnName = getDesignationName(dsgnCode);

    // Check if valid department and designation names are retrieved
    if (deptName != NULL && dsgnName != NULL) 
	{
        printf("Employee with employee ID %d is working in \"%s\" department as \"%s\".\n", empId, deptName, dsgnName);
    } 
	else 
	{
        printf("Invalid input. Please check the Department Number and Designation Code.\n");
    }

    return 0;
}

// Function to get department name based on department number
const char* getDepartmentName(int deptNo) 
{
    switch (deptNo) 
	{
        case 10: return "Marketing";
        case 20: return "Management";
        case 30: return "Sales";
        case 40: return "Designing";
        default: return NULL; // Invalid department number
    }
}

// Function to get designation name based on designation code
const char* getDesignationName(char dsgnCode) 
{
    switch (dsgnCode) 
	{
        case 'M': return "Manager";
        case 'S': return "Supervisor";
        case 'O': return "Security Officer";
        case 'C': return "Clerk";
        default: return NULL; // Invalid designation code
    }
}

