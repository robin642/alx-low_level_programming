#include "main.h"
/**
 * _strlen - The returns the length of a string
 * @s: The string
 * Return: The length
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
