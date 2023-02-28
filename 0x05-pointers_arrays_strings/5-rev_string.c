#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *rev_string - Entry code
  *@s: pointer of string
  *
  *Return: none
  */

void rev_string(char *s)
{
	int i, j = strlen(s);
	char t,

	for (i = 0, j -= 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
