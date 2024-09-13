/*
   Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in which the point lies. Also check for special cases point lies on +-x axis, +-y axis, origin.
 */

#include <stdio.h>

int main() 
{
	float x, y;

	// Ask the user to enter the coordinates of the point
	printf("Enter the x-coordinate: ");
	scanf("%f", &x);
	printf("Enter the y-coordinate: ");
	scanf("%f", &y);

	// Determine the position of the point
	if (x == 0 && y == 0) 
	{
		printf("The point (%.2f, %.2f) is at the ORIGIN.\n", x, y);
	} 
	else if (x == 0) 
	{
		// The point is on the y-axis
		if (y > 0) 
		{
			printf("The point (%.2f, %.2f) is on the POSITIVE Y-axis.\n", x, y);
		} 
		else 
		{
			printf("The point (%.2f, %.2f) is on the NEGATIVE Y-axis.\n", x, y);
		}
	} 
	else if (y == 0) 
	{
		// The point is on the x-axis
		if (x > 0) 
		{
			printf("The point (%.2f, %.2f) is on the POSITIVE X-axis.\n", x, y);
		} 

		else 
		{
			printf("The point (%.2f, %.2f) is on the NEGATIVE X-axis.\n", x, y);
		}
	} 
	else if (x > 0 && y > 0) 
	{
		// Quadrant I
		printf("The point (%.2f, %.2f) is in QUADRANT I.\n", x, y);
	} 
	else if (x < 0 && y > 0) 
	{
		// Quadrant II
		printf("The point (%.2f, %.2f) is in QUADRANT II.\n", x, y);
	} 

	else if (x < 0 && y < 0) 
	{
		// Quadrant III
		printf("The point (%.2f, %.2f) is in QUADRANT III.\n", x, y);
	} 
	else if (x > 0 && y < 0) 
	{
		// Quadrant IV
		printf("The point (%.2f, %.2f) is in QUADRANT IV.\n", x, y);
	}

	return 0;
}

