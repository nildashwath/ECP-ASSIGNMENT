/*
   Write a program to Accept two numbers and
   a. find its sum.
   b. find its difference.
   c. find its product.
   Test the program using different integral data type signed/unsigned char/int/long.
   First test the result using small values. Then test the same program using large values.
   Observe the results.
*/

#include<stdio.h>

int main()

{
	int a, b, sum, diff, prod;

	printf("Enter the number:");
	scanf("%d %d", &a, &b);

	printf("1.Sum\n");
	printf("2.Diff\n");
	printf("3.Prod\n");
	printf("Select any one:");

	scanf("%d", &sum);


	switch (sum)
	{

		case 1:
			sum=a+b;
			printf("Sum of number is %d", sum);
		break;

    	case 2:
			diff=a-b;
		printf("Diff of number is %d", diff);
		break;

		case 3:
			prod = a*b;
		printf("Prod of number is %d", prod);
		break;
	
	}
	return 0;
}
