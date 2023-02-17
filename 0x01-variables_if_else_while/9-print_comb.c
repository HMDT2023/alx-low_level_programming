#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i1, i2;

	for (i1 = 0; i1 <= 9; ++i1)
	{
		for (i2 = i1; i2 <= 9; ++i2)
		{
			putchar(i1 + '0');
			putchar(',');
			putchar(' ');
			putchar(i2 + '0');
		}
	}


	return (0);
}

