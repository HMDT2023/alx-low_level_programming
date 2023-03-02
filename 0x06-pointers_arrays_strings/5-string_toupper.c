#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_toupper - Entry point
 *
 *@word: string variable
 *
 * Return: Always 0.
 */

char *string_toupper(char *word)
{
	int i, len = strlen(word);

	for (i = 0; i < len; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			word[i] -= 32;
		}
	}

	return (word);
}
