#include "main.h"
#include <stddef.h>

/**
 * _strchr - The entry point
 * @s: The input
 * @c: The input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
		int r = 0;

		for (; s[r] >= '\0'; r++)
		{
			if (s[r] == c)
				return (&s[r]);
		}
		return (0);
}
