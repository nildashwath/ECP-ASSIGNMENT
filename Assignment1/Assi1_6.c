// Write a program to accept an integer value and print its table

#include<stdio.h>
int main ()
{
int num,i,res;

	printf("Enter the number:");
	scanf("%d",&num);

	for(i=1;i<=10; i++)
	{	
		res=num*i;
		printf("\t%d x %d = %d\n ",num, i, res);
	}	
return 0;
}








































