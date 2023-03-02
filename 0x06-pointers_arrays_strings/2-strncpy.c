#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *_strncpy - Entry code
  *@dest:var  dest char
  *@src: var src char
  *@n: var of number of bytes we'll take in src
  *
  *Return: a character
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
