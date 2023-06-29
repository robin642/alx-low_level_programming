#include "main.h"
#include <stdio.h>

/**
  * _strcat - Write a function that concatenates two strings
  * @dest: The input value
  * @src: The input value
  * Return: 0
  */

char *_strcat(char *dest, char *src)

{
		int r;
		int w;

			r = 0;
				while (dest[r] != '\0')
				{
					r++;
				}
			w = 0;
				while (src[w] != '\0')
				{
					dest[r] = src[w];
					r++;
					w++;
				}

					dest[r] = '\0';
					return (dest);
}
