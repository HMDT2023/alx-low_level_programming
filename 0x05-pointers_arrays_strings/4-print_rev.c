#include <stdio.h>
#include "main.h"

/**
  *print_rev - Entry code
  *@s: pointer of string
  *
  *Return: none
  */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
