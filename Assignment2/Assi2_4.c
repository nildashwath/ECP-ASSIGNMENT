/*
Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.
*/

#include<stdio.h>
int main ()
{
	int num1, num2;
	printf("Enter the Numbers");
	scanf("%d %d", &num1,&num2);
	
	if (num1 > num2)
	{
	printf("The %d is greater\n", num1);
	}
	else
	{
	printf("The %d is greater\n", num2);
	}

	return 0;
}
