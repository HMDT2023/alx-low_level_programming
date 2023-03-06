#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *_strstr - Entry code
  *@haystack: 1st char
  *@needle: 2nd char
  *
  *Return: char*
  */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
