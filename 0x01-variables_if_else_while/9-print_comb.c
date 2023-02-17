#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c1, c2;

	for (c1 = '0'; c1 <= '9'; ++c1)
	{
		for (c2 = c1; c2 <= '9'; ++c2)
		{
			putchar(c1);
			putchar(',');
			putchar(' ');
			putchar(c2);
		}
		putchar('\n');
	}


	return (0);
}

