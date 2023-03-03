#include <stdio.h>

/**
 *print_number - Entry point
 *
 *@n: int variable
 *
 * Return: none
 */

void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num > 9)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}

