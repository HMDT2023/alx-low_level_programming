#include <stdio.h>
#include "main.h"

/**
*_puts_recursion - Entry code
*@s: string variable
*Return: none
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		return;
	}

	_putchar(*s);
	s++;

	_puts_recursion(s);

}
