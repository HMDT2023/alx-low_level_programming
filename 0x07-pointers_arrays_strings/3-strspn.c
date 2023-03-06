#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *_strspn - Entry code
  *@s: 1st char
  *@accept: 2nd char
  *
  *Return: unsigned int
  */

unsigned int *_strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
