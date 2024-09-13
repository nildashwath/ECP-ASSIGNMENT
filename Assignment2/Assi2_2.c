//Input a number and display whether number is Even or Odd.

#include<stdio.h>

int main ()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);

	if (num % 2 ==0)
	{
	printf("Even Number..!");
	}

	else
	{
	printf("Number is odd..!");
	}
	return 0;
}
