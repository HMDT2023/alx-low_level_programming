#include "main.h"

/**
  * _islower - to checks if a character is lower or no
  *
  * @c: refer to the character
  *
  * Return: 1 if the character c is lower. 0 otherwise
  */

int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}

		i++;
	}

	return (0);
}
