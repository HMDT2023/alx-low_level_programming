#include <stdio.h>
#include "main.h"

/**
  *swap_int - Entry code
  *@a: first pointer variable 
  *@b: second pointer variable
  *
  *Return: none
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
