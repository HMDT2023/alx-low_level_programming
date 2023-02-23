#include "main.h"

/**
 *print_diagonal - draws a diagonal line.
 *@n : variable
 * Return: non
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
