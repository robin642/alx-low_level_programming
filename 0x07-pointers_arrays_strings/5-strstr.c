#include "main.h"

/**
  * _strstr - Write a function that locates a substring
  * @haystack: The input
  * @needle: The input
  * Return: Always 0 (Success)
  */

char *_strstr(char *haystack, char *needle)

{
		int robin;

		if (*needle == 0)
			return (haystack);

		while (*haystack)
		{
			robin = 0;

			if (haystack[robin] == needle[robin])
			{
				do {
					if (needle[robin + 1] == '\0')
						return (haystack);

					robin++;

				} while (haystack[robin] == needle[robin]);
			}

				haystack++;
		}
				return ('\0');
}
