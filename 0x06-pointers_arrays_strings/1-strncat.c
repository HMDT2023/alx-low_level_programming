#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *_strncat - Entry code
  *@dest:var  dest char
  *@src: var src char
  *@n: var of number of bytes we'll take in src
  *
  *Return: a character
  */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}

