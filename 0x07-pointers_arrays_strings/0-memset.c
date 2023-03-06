#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *_memset - Entry code
  *@s: 1st char
  *@b: 2nd char
  *@n: bytes
  *Return: a character
  */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
