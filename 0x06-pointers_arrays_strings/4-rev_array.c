#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *reverse_array - Entry code
  *@a: the array
  *@n: number of elements of the array
  *
  *Return: none
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int *b = malloc(n*sizeof(int));

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}

	for (j = n - 1; j >= 0; j--)
	{
		a[j] = b[n - 1 - j];
	}

	free(b);
}
