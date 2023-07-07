#include "main.h"

/**
 * char *_strcpy - The a function that copies the string pointed to by src
 * @dest: The copy to
 * @src: The copy from
 * Return: The string
 */

char *_strcpy(char *dest, char *src)

{
		int r = 0;
		int w = 0;

		while (*(src + r) != '\0')
		{
			r++;
		}

		for (; w < r; w++)
		{
			dest[w] = src[w];
		}
			dest[r] = '\0';
			return (dest);
}
