#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *_strpbrk - Entry code
  *@s: 1st char
  *@accept: 2nd char
  *
  *Return: char*
  */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
