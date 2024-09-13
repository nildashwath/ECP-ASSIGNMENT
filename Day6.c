#include<stdio.h>

int check_prime (int num);
int main ()
{
	int num ;
	printf ("Enter the number:");
	scanf("%d", &num);
	int p =check_prime(num);
	if (p == 1)
	{
		printf("%d is not the prime number:", num);
	}
	else{
		printf("%d is prime number", num);
	}
	return 0;
}

int check_prime (int num)
{
	int flag = 0;
	int i = 2;
	while (i <= num/2)
	{
		if (num % i != 0)
		{
			flag = 1;
			return flag;
		}
		i++;
	}
	return flag;
}

