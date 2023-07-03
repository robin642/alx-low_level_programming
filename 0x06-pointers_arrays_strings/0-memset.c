#include "main.h"

/**
  * _memset - Write a function that fills memory with a constant byte
  * @s: Starting address of memory to be filled
  * @b: The desired value
  * @n: Number of bytes to be changed
  * Return: Changed array with new value for n bytes
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
