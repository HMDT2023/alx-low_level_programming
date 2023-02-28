#include <stdio.h>
#include "main.h"

/**
  *print_array - Entry code
  *@a: pointer of int
  *@n: int parameter
  *
  *Return: none
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("array[%d] = %d", i, a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");

}
