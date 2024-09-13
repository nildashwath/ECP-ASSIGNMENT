#include <stdio.h>

#include <math.h>  // For sqrt() function

int main() 
{
    float s1, s2, s3, s, area, peri;

    
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    // Calculate the perimeter
    peri = s1 + s2 + s3;
    printf("Perimeter of the triangle = %.2f\n", peri);

    // Calculate semi-perimeter
    s = peri / 2;

    // Check if the triangle is valid or not
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) 
	{
        // Calculate the area using formula
        area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        printf("Area of the triangle = %.2f\n", area);
    } 
	else 
	{
       
        printf("The given values of sides, don't form a valid triangle...!\n");
    }

    return 0;
}

