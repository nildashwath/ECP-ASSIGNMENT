/*Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)
___________________________________________________________________________________
Data Type				Size			Format Specifier  				Range
___________________________________________________________________________________
char					1						%c					-128 to +127

unsigned char			1						%c					0 to 255

short int				2						%hd				-32768 to +32767

unsigned short int		2						%hu					0 to 65535

int						2						%d				-32768 to +32767

unsigned int			2						%u					0 to 65535

long int				4						%ld			–2,147,483,648 to 2,147,483,647

unsigned long int		4						%lu				0 to 4,294,967,295
______________________________________________________________________________________*/

#include <stdio.h>
#include <limits.h>  // For integer limits


int main() {
    
    printf("______________________________________________________________________\n");
    printf("Data Type            Size  Format Specifier        Range\n");
    printf("______________________________________________________________________\n");

    // char
    printf("char                 %2lu    %%c                    %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    
    // unsigned char
    printf("unsigned char        %2lu    %%c                    0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
    
    // short int
    printf("short int            %2lu    %%hd                   %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    
    // unsigned short int
    printf("unsigned short int   %2lu    %%hu                   0 to %u\n", sizeof(unsigned short), USHRT_MAX);
    
    // int
    printf("int                  %2lu    %%d                    %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    
    // unsigned int
    printf("unsigned int         %2lu    %%u                    0 to %u\n", sizeof(unsigned int), UINT_MAX);
    
    // long int
    printf("long int             %2lu    %%ld                   %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    
    // unsigned long int
    printf("unsigned long int    %2lu    %%lu                   0 to %lu\n", sizeof(unsigned long), ULONG_MAX);

    printf("______________________________________________________________________\n");

    return 0;
}






