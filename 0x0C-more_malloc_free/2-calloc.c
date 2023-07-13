#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: The memory area to be filled
 * @b: The char to copy
 * @n: The number of times to copy b
 * Return: The pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
		unsigned int r;


		for (r = 0; r < n; r++)
		{
			s[r] = b;
		}

		return (s);
}

/**
 * *_calloc -  Allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
		char *rob;


		if (nmemb == 0 || size == 0)
			return (NULL);

		rob = malloc(size * nmemb);

		if (rob == NULL)
			return (NULL);

		_memset(rob, 0, nmemb * size);

		return (rob);
}
