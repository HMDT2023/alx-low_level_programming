#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  *
  * @n: refer to the int number
  *
  * Return: n if n is positive. Otherwise -(n)
  */

int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * (n));
	}

	return (n);
}
