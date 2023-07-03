#include "main.h"

/**
  * _strpbrk - Function that searches a string for any of a set of bytes
  * @s: Input
  * @accept: Input
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

