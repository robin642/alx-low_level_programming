#include "main.h"

/**
  * _strstr - Write a function that locates a substring
  * @haystack: The input
  * @needle: The input
  * Return: Always 0 (Success)
  */

char *_strstr(char *haystack, char *needle)

{
		for (; *haystack != '\0'; haystack++)
		{
			char *d = haystack;
			char *w = needle;

			while (*d == *w && *w != '\0')
			{
				d++;
				p++;
			}
				if (*w == '\0')
					return (haystack);
		}
				return (0);
}
