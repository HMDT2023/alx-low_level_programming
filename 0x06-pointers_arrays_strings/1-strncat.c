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
	return (strncat(dest, src, n));
}
