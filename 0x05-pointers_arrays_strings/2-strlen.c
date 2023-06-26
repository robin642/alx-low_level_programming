#include "main.h"

/**
  * _strlen - Write a function that returns the length of a string.
  *
  * @s: Give length of string
  *
  * Return: Success length 0
  */

int _strlen(char *s)

{
	int lengthr = 0;


	while (*s != '\0')
	{
		lengthr++;
		s++;
	}

		return (lengthr);
}
