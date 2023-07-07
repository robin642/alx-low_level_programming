#include "main.h"

/**
 * _strncat - The concatenate two strings using at most n bytes from src
 * @dest: The input value
 * @src: The input value
 * @n: The input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
		int r;
		int w;

		r = 0;
		while (dest[r] != '\0')
		{
			r++;
		}

		w = 0;
		while (w < n && src[w] != '\0')
		{
			dest[r] = src[w];
			r++;
			w++;
		}
			dest[r] = '\0';
			return (dest);
}
