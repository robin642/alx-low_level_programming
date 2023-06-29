#include "main.h"

/**
  * _strncpy - Write a function that copies a string
  * @dest: The input value
  * @src: The input value
  * @n: The input value
  * Return: (dest) 0
  */

char *_strncpy(char *dest, char *src, int n)

{
		int r;

		r = 0;
			while (r < n && src[r] != '\0')
			{
				dest[r] = src[r];
				r++;
			}

			while (r < n)
			{
				dest[r] = '\0';
				r++;
			}
				
				return (dest);
}
