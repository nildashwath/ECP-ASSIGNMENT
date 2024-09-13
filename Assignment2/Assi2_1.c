/*
Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.
*/

#include<stdio.h>
int main()
{
	int num1, num2, res;
	{
	printf("Enter the two number");
	scanf("%d %d",&num1, &num2);

	if (num2==0)
	{
	printf("Number is zero");
	}
	else 
	{
	printf("%d", res);
	}

	return 0;
	}
}

