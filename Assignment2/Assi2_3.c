//Write a program to accept number and check whether the number is +ve, -ve and zero.

#include<stdio.h>

int main()
{
	int num;
 	printf("Enter the number");
	 scanf("%d",&num);

	 if (num>0 )
 		{printf("The number is +ve\n");
		}
		else if(num<0)
		{ printf("The the number is -Ve\n");
		}

		else
		{printf("The Number is Zero\n");
		}
		return 0;
}


