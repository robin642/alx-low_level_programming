#include "main.h"

/**
  * _strpbrk - Write a function that searches a string for any of a set of bytes
  * @s: The input
  * @accept: The input
  * Return: Always 0 (Success)
  */

char *_strpbrk(char *s, char *accept)

{
		int d;

		while (*s)
		{
			for (d = 0; accept[d]; d++)
			{
			if (*s == accept[d])
			return (s);
			}
				s++;
		}
				return ('\0');
}

