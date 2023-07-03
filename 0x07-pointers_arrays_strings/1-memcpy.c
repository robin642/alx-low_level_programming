#include "main.h"

/**
  * _memcpy - Write a function that copies memory area
  * @dest: The memory is stored
  * @src: The memory is copied
  * @n: The number of bytes
  * Return: The copied memory with n byte changed
  */

char *_memcpy(char *dest, char *src, unsigned int n)

{
		int w = 0;
		int d = n;

		for (; w < d; w++)
		{
			dest[w] = src[w];
			n--;
		}
			return (dest);
}
