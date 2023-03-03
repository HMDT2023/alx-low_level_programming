#include <stdio.h>

/**
 *rot13 - Entry point
 *
 *@str: string variable
 *
 * Return: string.
 */


char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
			}
		}
	}

	return (str);
}
