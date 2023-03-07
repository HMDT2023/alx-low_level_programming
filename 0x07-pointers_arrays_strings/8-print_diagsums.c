#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - Entry code
  *@a: array of char
  *@size: size of a array
  *Return: none
  */

void print_diagsums(int *a, int size)
{

	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}

