/*
   Write a program to simulate the following library function.
   a. size_t strlen(const char* str);
   b. char* strcpy(char *dest, const char *src);
   c. char* strcat(char *dest, const char *src);
   d. int strcmp(const char *str1, const char *str2);
   e. int stricmp(const char *str1, const char *str2);
   f. char* strrev(char* str);
   g. char* strchr(const char *str, int ch);
   h. char* strstr(const char *str, const char *substr);
 */

#include <stdio.h>
#include <ctype.h>  // For lowercase conversion in my_stricmp()

// Calculate the length of a string
size_t my_strlen(const char *str) 
{
	size_t length = 0;
	while (str[length] != '\0') 
	{  // Keep counting until we hit the null character
		length++;
	}
	return length;
}

//Copy string src to dest
char* my_strcpy(char *dest, const char *src) 
{
	int i = 0;
	while (src[i] != '\0') 
	{  // Copy each character from src to dest
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';  // Add the null terminator to the end of the destination string
	return dest;
}

//Concatenate src to the end of dest
char* my_strcat(char *dest, const char *src) 
{
	int dest_len = my_strlen(dest);  // Find the length of dest
	int i = 0;

	// Start copying src at the end of dest
	while (src[i] != '\0') 
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';  // Add the null terminator at the end
	return dest;
}

// Compare two strings
int my_strcmp(const char *str1, const char *str2)
{
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') 
	{
		if (str1[i] != str2[i]) 
		{
			return str1[i] - str2[i];  // If characters differ, return the difference
		}
		i++;
	}
	return str1[i] - str2[i];  // Handle cases where one string is shorter
}

// Compare two strings ignoring case
int my_stricmp(const char *str1, const char *str2) 
{
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') 
	{
		if (tolower(str1[i]) != tolower(str2[i])) 
		{  // Compare lowercase versions of characters
			return tolower(str1[i]) - tolower(str2[i]);
		}
		i++;
	}
	return tolower(str1[i]) - tolower(str2[i]);  // Handle cases where strings differ in length
}

// Reverse a string
char* my_strrev(char *str) 
{
	int start = 0;
	int end = my_strlen(str) - 1;
	char temp;

	while (start < end) 
	{  // Swap characters from start and end until they meet in the middle
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return str;
}

//Locate the first occurrence of a character in a string
char* my_strchr(const char *str, int ch) 
{
	int i = 0;
	while (str[i] != '\0') 
	{
		if (str[i] == ch) 
		{
			return (char*)&str[i];  // Return a pointer to the first occurrence of ch
		}
		i++;
	}
	return NULL;  // Return NULL if character is not found
}

// Find the first occurrence of a substring in a string
char* my_strstr(const char *str, const char *substr) 
{
	int i = 0;
	int j;
	while (str[i] != '\0') 
	{
		j = 0;
		while (str[i + j] != '\0' && substr[j] != '\0' && str[i + j] == substr[j]) {
			j++;
		}
		if (substr[j] == '\0') 
		{
			return (char*)&str[i];  // Return a pointer to the start of the found substring
		}
		i++;
	}
	return NULL;  // Return NULL if the substring is not found
}

// Test the custom string functions
int main() 
{
	char str1[50] = "Hello";
	char str2[50] = "Welcome to DESD...!";
	char str3[50];

	// Test my_strlen()
	printf("Length of '%s' is: %lu\n", str1, my_strlen(str1));

	// Test my_strcpy()
	my_strcpy(str3, str1);
	printf("After copying, str3: %s\n", str3);

	// Test my_strcat()
	my_strcat(str1, str2);
	printf("After concatenation, str1: %s\n", str1);

	// Test my_strcmp()
	printf("Comparing 'Hello' and 'World': %d\n", my_strcmp("Hello", "World"));

	// Test my_stricmp()
	printf("Comparing 'hello' and 'HELLO' (case insensitive): %d\n", my_stricmp("hello", "HELLO"));

	// Test my_strrev()
	my_strrev(str3);
	printf("Reversed str3: %s\n", str3);

	// Test my_strchr()
	printf("First occurrence of 'o' in 'HelloWorld': %s\n", my_strchr(str1, 'o'));

	// Test my_strstr()
	printf("First occurrence of 'World' in 'HelloWorld': %s\n", my_strstr(str1, "World"));

	return 0;
}

