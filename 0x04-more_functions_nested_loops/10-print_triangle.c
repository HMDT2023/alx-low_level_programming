#include "main.h"

/**
 *print_triangle - prints a triangle, followed by a new line
 *@size : variable
 * Return: none
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= (size - (i + 1)))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
