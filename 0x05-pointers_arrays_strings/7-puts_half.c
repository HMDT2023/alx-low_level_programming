#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *puts_half - Entry code
  *@str: pointer of string
  *
  *Return: none
  */

void puts_half(char *str)
{
	int i, j = strlen(str) / 2;

	for (i = j; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}

	_putchar(str[i]);
}
