#include <stdio.h>
#include "main.h"

/**
  *rev_string - Entry code
  *@s: pointer of string
  *
  *Return: none
  */

void rev_string(char *s)
{
	int i, j = 0;
	char *p = *s;

	for (i = _strlen(p); i > 0; i--)
	{
		s[j] = p[i];
		j++;
	}

}
