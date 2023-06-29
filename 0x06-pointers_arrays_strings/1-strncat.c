#include "main.h"

/**
  * _strncat - Write a function that concatenates two strings
  * it will use at most n bytes from src.
  * @dest: The input value
  * @src: The input value
  * @n: The input value
  * Return: (dest) 0
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
