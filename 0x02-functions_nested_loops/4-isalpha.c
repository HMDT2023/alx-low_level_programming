#include "main.h"

/**
  * _isalpha - to checks if a character is lower or no
  *
  * @c: refer to the character
  *
  * Return: 1 if the character c is alpha. 0 otherwise
  */

int _isalpha(int c)
{
	int i = 97, j = 65;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}

		i++;
	}

	while (j <= 90)
	{
		if (c == j)
		{
			return (1);
		}

		j++;
	}
	return (0);
}
