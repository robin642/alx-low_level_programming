#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int r, w;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (r = 0; s[r] != '\0'; r++)
	{
		for (w = 0; a[w] != '\0'; w++)
		{
			if (s[r] == a[w])
			{
				s[r] = b[w];
				break;
			}
		}
	}

	return (s);
}
