#include <stdio.h>
#include "main.h"


/**
*two_digit - Entry to code
*
* @n : variable
*
* Return: Always all number (Success)
*/

void two_digit(int n)
{
	int i = 0;
	int j = 0;

	i = n % 10;
	j = (n - i);
	_putchar((j / 10) + '0');
	_putchar(i  + '0');
}


/**
*three_digit - Entry to code
*
* @n : variable
*
* Return: Always all number (Success)
*/

void three_digit(int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	i = n % 10;
	j = (n - j) % 100;
	k = (n - i - j);
	_putchar(k  + '0');
	_putchar((j / 10) + '0');
	_putchar(i / 100 + '0');
}


/**
*four_digit - Entry to code
*
* @n : first integer
*
* Return: Always all number (Success)
*/
void four_digit(int n)
{
	int i = 0;
	int t = 0;
	int j = 0;
	int k = 0;

	j = n % 10;
	t = (n - j) % 100;
	k = (n - j - t) % 1000;
	i = (n - t - j - k);
	_putchar((i / 1000) + '0');
	_putchar((k / 100) + '0');
	_putchar((t / 10) + '0');
	_putchar(j + '0');
}


/**
*print_number - Entry to code
*
* @n : integer to print
*
* Return: Always all number (Success)
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	else if (num <= 9)
	{
		_putchar(num + '0');
	}

	else if (num <= 99)
	{
		two_digit(num + '0');
	}

	else if (num <= 999)
	{
		three_digit(num + '0');
	}

	else if (num <= 9999)
	{
		four_digit(num + '0');
	}
}
