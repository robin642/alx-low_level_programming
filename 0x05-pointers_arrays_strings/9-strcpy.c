#include "main.h"

/**
  * _strcpy - Write a function that copies the string pointed to by src,
  * including the terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: char string
  * @src: char string
  * Return: pointed to dest success 0
  */

char *_strcpy(char *dest, char *src)

{
	int r = -1;

	do {
		r++;
		dest[r] = src[r];
	} while (src[r] != '\0');

	return (dest);
}
