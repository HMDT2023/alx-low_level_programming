#include "main.h"
#include<stdio.h>

/**
 *is_prime - check if number is prime or no
 *
 *@n : variable
 *
 * Return: 1 if number is prime. 0 otherwise
 */

int is_prime(int n)
{
	int i;

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
	int i, gfactor;

	for (i = 2; N != 1; i++)
	{
		if ((N % i == 0) && (is_prime(i)))
		{
			N = N / i;
			gfactor = i;
		}
	}
	printf("%d\n", gfactor);
	return (0);
}
