#include "main.h"

/**
 * _strspn - The entry point
 * @s: The input
 * @accept: The input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
		unsigned int d = 0;
		int w;

		while (*s)
		{
			for (w = 0; accept[w]; w++)
			{
				if (*s == accept[w])
				{
					d++;
					break;
				}
				else if (accept[w + 1] == '\0')
					return (d);
			}
			s++;
		}
		return (d);
}
