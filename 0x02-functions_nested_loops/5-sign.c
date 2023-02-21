#include "main.h"

/**
  * _print_sign - that prints the sign of a number
  *
  * @n: refer to the number
  *
  * Return: 1 and print + if the number is greater than zero.
  * 0 and print 0 if the number is zero
  * -1 and print - if the number is less than zero
  */

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
