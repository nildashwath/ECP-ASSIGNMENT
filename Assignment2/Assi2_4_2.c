/*
Write a program to find maximum of two numbers using
conditional operator
*/

#include<stdio.h>

int main ()
{
	int num1, num2;
	{
	printf("Enter the Numbers");
	scanf("%d %d", &num1,&num2);

	 (num1>=num2)? (printf("%d is greater\n",num1)) : (printf("%d is greater\n",num2));
	 }
	 return 0;
}
