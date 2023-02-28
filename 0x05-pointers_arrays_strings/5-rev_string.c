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
	int i, l, j = 0;
	char *p = *s;

	for (l = 0; *(str + l) != '\0'; l++)
	{
	}

	for (i = (l - 1) ; i >= 0; i--)
	{
		s[j] = p[i];
		j++;
	}

}
