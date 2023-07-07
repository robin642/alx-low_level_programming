#include "main.h"

/**
 *_memcpy - The a function that copies memory area
 *@dest: The memory where is stored
 *@src: The memory where is copied
 *@n: The number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
		int w = 0;
		int d = 0;

		for (; w < d; w++)
		{
			dest[w] = src[w];
			n--;
		}
		return (dest);
}
