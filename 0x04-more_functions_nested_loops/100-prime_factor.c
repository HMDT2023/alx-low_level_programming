#include "main.h"
#include<stdio.h>

/**
 *is_prime - check if number is prime or no
 *
 *@n : variable
 *
 * Return: 1 if number is prime. 0 otherwise
 */

long int is_prime(long int n)
{
	long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}


/**
 *main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	
	long int N = 612852475143;
	long int i, gfactor;

	for (i = 2; i <= N; i++)
	{
		if (is_prime(i))
		{
			while (N % i == 0)
			{
				N = N / i;
				gfactor = i;
			}
		}
	}
	printf("%ld \n", gfactor);
	return (0);
}
