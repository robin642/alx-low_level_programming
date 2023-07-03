#include "main.h"

/**
  * _strchr - Write a function that locates a character in a string
  * @s: input
  * @c: input
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
