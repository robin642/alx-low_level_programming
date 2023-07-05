#include "main.h"

/**
  * _strlen_recursion - Write a function that returns the length of a string.
  * @s: The string to measured.
  * Return: The length of the string.
  */

int _strlen_recursion(char *s)

{
		int lengthstr = 0;

		if (*s)
		{
			lengthstr++;
			lengthstr += _strlen_recursion(s + 1);
		}

		return (lengthstr);
}
