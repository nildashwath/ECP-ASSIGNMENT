#include <stdio.h>
#include <float.h>  // For floating-point limits

int main() {
    // Display table header
    printf("____________________________________________________________________________________\n");
    printf("Data Type            Size  Format Specifier        Range\n");
    printf("____________________________________________________________________________________\n");

    // char
    printf("char                 %2lu    %%c                    %d to %d\n", sizeof(char), (char)(-(1 << (8 * sizeof(char) - 1))), (char)((1 << (8 * sizeof(char) - 1)) - 1));
    
    // unsigned char
    printf("unsigned char        %2lu    %%c                    0 to %u\n", sizeof(unsigned char), (unsigned char)((1 << (8 * sizeof(unsigned char))) - 1));
    
    // short int
    printf("short int            %2lu    %%hd                   %d to %d\n", sizeof(short), (short)(-(1 << (8 * sizeof(short) - 1))), (short)((1 << (8 * sizeof(short) - 1)) - 1));
    
    // unsigned short int
    printf("unsigned short int   %2lu    %%hu                   0 to %u\n", sizeof(unsigned short), (unsigned short)((1 << (8 * sizeof(unsigned short))) - 1));
    
    // int
    printf("int                  %2lu    %%d                    %d to %d\n", sizeof(int), (int)(-(1 << (8 * sizeof(int) - 1))), (int)((1 << (8 * sizeof(int) - 1)) - 1));
    
    // unsigned int
    printf("unsigned int         %2lu    %%u                    0 to %u\n", sizeof(unsigned int), (unsigned int)((1 << (8 * sizeof(unsigned int))) - 1));
    
    // long int
    printf("long int             %2lu    %%ld                   %ld to %ld\n", sizeof(long), (long)(-(1 << (8 * sizeof(long) - 1))), (long)((1 << (8 * sizeof(long) - 1)) - 1));
    
    // unsigned long int
    printf("unsigned long int    %2lu    %%lu                   0 to %lu\n", sizeof(unsigned long), (unsigned long)((1 << (8 * sizeof(unsigned long))) - 1));
    
    // float
    printf("float                %2lu    %%f, %%g, %%e, %%E      %.10e to %.10e\n", sizeof(float), FLT_MIN, FLT_MAX);
    
    // double
    printf("double               %2lu    %%f, %%g, %%e, %%E      %.10e to %.10e\n", sizeof(double), DBL_MIN, DBL_MAX);
    
    // long double
    printf("long double          %2lu    %%Lf, %%Lg, %%Le, %%LE  %.10Le to %.10Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    printf("____________________________________________________________________________________\n");

    return 0;
}

