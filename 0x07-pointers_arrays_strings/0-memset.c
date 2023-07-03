#include "main.h"
#include <stdio.h>

/**
  * _memset - Write a function that fills memory with a constant byte
  * @s: Starting address of memory to be filled
  * @b: The desired value
  * @n: Number of bytes to be changed
  * Return: Changed array with new value for n bytes
  */

char *_memset(char *s, char b, unsigned int n)

{
		unsigned int r;

		for (r = 0; r < n;  r++)
		{
			s[r] = b;
		}
			return (s);
}
