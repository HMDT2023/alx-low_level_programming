#include <stdio.h>
#include <ctype.h>

/**
 *cap_string - Entry point
 *
 *@str: string variable
 *
 * Return: string.
 */

char *cap_string(char *str)
{
	int i;
	char *p = str;

	if (*p != '\0' && islower(*p))
	{
		*p = toupper(*p);
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			if (str[i + 1] != '\0' && islower(str[i + 1]))
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
	}

	return (str);
}
