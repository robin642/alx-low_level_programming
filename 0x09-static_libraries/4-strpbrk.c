#include "main.h"
/**
 * _strpbrk - The entry point
 * @s: The input
 * @accept: The input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
		int r;

		while (*s)
		{
			for (r = 0; accept[r]; r++)
			{
			if (*s == accept[r])
			return (s);
			}
				s++;
		}

			return ('\0');
}
