#include <stdio.h>
#include "main.h"

/**
  *_strcmp - Entry code
  *@s1: 1st char
  *@s2: 2nd char
  *
  *Return: a character
  */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	
	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++){
	
	if (s1[i] < s2[j]) return (-1);
	if (s1[i] > s2[j]) return (1);
	}
	
	return (0);
}
