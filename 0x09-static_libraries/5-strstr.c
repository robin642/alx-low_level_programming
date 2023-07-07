#include "main.h"

/**
 * _strstr - The entry point
 * @haystack: The input
 * @needle: The input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)

{
		for (; *haystack != '\0'; haystack++)
		{
			char *r = haystack;
			char *w = needle;

			while (*r == *w && *w != '\0')
			{
				r++;
				w++;
			}

			if (*w == '\0')
				return (haystack);
		}
			return (0);
}
