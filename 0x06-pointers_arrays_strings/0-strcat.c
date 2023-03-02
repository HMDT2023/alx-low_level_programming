#include <stdio.h>
#include "main.h"

/**
  *_strcat - Entry code
  *@dest:var  dest char
  *@src: var src char
  *
  *Return: a character
 */

char *_strcat(char *dest, char *src)
{
	int i, len_dest;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}

	dest[len_dest] = '\0';

	return (dest);
}
