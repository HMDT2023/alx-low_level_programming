#include <stdio.h>
#include "main.h"

/**
  *_strlen - Entry code
  *@s: pointer of string
  *
  *Return: len of the string
  */

int _strlen(char *s)
{
	int len = 0;
	
	for(len = 0; *(s + len) != '\0'; len++)
	{
	}
	
	return len;
}
