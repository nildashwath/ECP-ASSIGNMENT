/*
Write a function to converts a string of digits into its numeric equivalent i.e. simulate atoi().
int atoi(const char* string);
*/

#include <stdio.h>

// Function to convert a string of digits to an integer
int my_atoi(const char* str) {
    int number = 0;  
    int sign = 1;    

    // if the number is negative
    if (*str == '-') {
        sign = -1;  
        str++;    
    } else if (*str == '+') {
        str++;     
    }

    // Loop through each character in the string
    while (*str != '\0') {  
        if (*str >= '0' && *str <= '9') { 
            number = number * 10 + (*str - '0'); 
        } 
		else 
		{
            
            return 0; 
        }
        str++;
    }

    return sign * number;
}

int main() 
{
    const char* str1 = "12345";
    const char* str2 = "-6789";
    const char* str3 = "+4567";

    printf("String '%s' as integer: %d\n", str1, my_atoi(str1));
    printf("String '%s' as integer: %d\n", str2, my_atoi(str2));
    printf("String '%s' as integer: %d\n", str3, my_atoi(str3));

    return 0;
}

