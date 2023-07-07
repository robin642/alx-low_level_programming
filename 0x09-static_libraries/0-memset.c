#include "main.h"
/**
 * _memset - The fill a block of memory with a specific value
 * @s: The starting address of memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be changed
 *
 * Return: The changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
		int r = 0;

		for (; n > 0; r++)
		{
			s[r] = b;
			n--;
		}
		return (s);
}
