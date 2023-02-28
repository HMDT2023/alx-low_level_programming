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
	int i, k, l, j = 0;
	char *p = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		p[i] = s[i];
	}

	for (l = 0; *(s + l) != '\0'; l++)
	{
	}

	for (k = (l - 1) ; k >= 0; k--)
	{
		s[j] = p[k];
		j++;
	}

}
