#include <stdio.h>

/**
 *leet - Entry point
 *
 *@str: string variable
 *
 *Return: string.
 */

char *leet(char *str)
{
	char str_min[5] = {'a', 'e', 'o', 't', 'l'};
	char str_maj[5] = {'A', 'E', 'O', 'T', 'L'};
	int enc[5] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == str_min[j] || str[i] == str_maj[j])
			{
				str[i] = enc[j] + '0';
			}
		}
	}

	return (str);
}
